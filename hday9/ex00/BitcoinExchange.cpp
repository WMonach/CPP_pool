/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:54:09 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/29 19:04:06 by will             ###   ########lyon.fr   */
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

void	BitcoinExchange::printBitcoin( std::string line) const
{
	size_t			pipe;
	float			value;
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
	
}

int	checkDate()