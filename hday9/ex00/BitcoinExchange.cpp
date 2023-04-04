/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:54:09 by wmonacho          #+#    #+#             */
/*   Updated: 2023/04/04 14:44:48 by wmonacho         ###   ########.fr       */
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
	value = std::atof(line.substr(pipe + 3).c_str());
	if (value < 0)
		std::cout << "Error: not a positive number." << std::endl;
	else if (value > 1000)
		std::cout << "Error: too large a number." << std::endl;
	else
	{
		database_feed();
		std::map<std::string, float>::const_iterator it = this->bitcoin_rates.upper_bound(date);
		if (it != this->bitcoin_rates.begin())
			it--;
		std::cout << date << " => " << value << " = " 
			<< it->second * value << std::endl;
	}
	
}

int	BitcoinExchange::check_date(std::string date) const
{
	size_t	i;
	size_t	y;
	int		check;

	i = date.find("-");
	if (i != 4 || date.find_first_not_of("0123456789") != i)
		return (1);
	y = i + 1;
	i = date.find("-", i + 1);
	check = std::atoi(date.substr(y, i).c_str());
	if (i - y != 2 || date.find_first_not_of("0123456789", y) != i || 
			check < 1 || check > 12)
		return (1);
	y = i + 1;
	date.find_first_not_of("0123456789", y);
	check = std::atoi(date.substr(y, date.size()).c_str());
	if ( date.size() - y != 2 || check < 1 || check > 31 ||
			date.find_first_not_of("0123456789", y) != std::string::npos)
		return (1);
	return (0);
}

void	BitcoinExchange::database_feed(void)
{
	std::fstream	database;
	std::string		line;
	size_t			coma;

	database.open("data.csv", std::fstream::in );
	if (!database.is_open())
	{
		std::cerr << "Error: could not load database file." << std::endl;
		database.close();
		exit(1);
	}

	/*delete first line wich is format type*/
	// std::getline(database, line);
	// line.clear();

	while ( !(std::getline(database, line).eof()) )
	{
		coma = line.find(",");
		this->bitcoin_rates[line.substr(0, coma)] = std::atof(line.substr(coma + 1, std::string::npos).c_str());
		// line.clear();
	}
	this->bitcoin_rates[line.substr(0, coma)] = 2;
		// std::cout << this->bitcoin_rates[line.substr(0, coma)] << std::endl;
	// database.close();
}