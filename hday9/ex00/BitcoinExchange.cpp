/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:54:09 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/28 16:48:14 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void )
{

}

BitcoinExchange::~BitcoinExchange( void )
{

}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &rhs)
{
	*this = rhs;
}
BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const &obj)
{
	this->bitcoin_rates = obj.bitcoin_rates;
	return (*this);
}

void	BitcoinExchange::printBitcoin( std::string line)
{
		size_t			pipe;
	double			value;
	std::string		date;

	pipe = line.find(" | ");
	if (pipe == std::string::npos)
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return ;
	}
	date = line.substr(0, pipe);
	if (check_date(date))
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return ;
	}
	value = std::atof(line.substr(pipe + 3).c_str());
	if (value < 0)
		std::cout << "Error: not a positive number." << std::endl;
	else if (value > 1000)
		std::cout << "Error: too large a number." << std::endl;
	else
	{
		std::map<std::string, double>::const_iterator it = _bct.upper_bound(date);
		if (it != _bct.begin())
			it--;

	/*uncomment this ligne to show what line in database is used*/
		std::cout << "    date = " << it->first
			<< "  quotient = " << it->second << std::endl;
		
		std::cout << date << " => " << value << " = " 
			<< it->second * value << std::endl;
	}
}