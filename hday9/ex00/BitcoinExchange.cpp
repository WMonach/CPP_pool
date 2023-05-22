/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:54:09 by wmonacho          #+#    #+#             */
/*   Updated: 2023/05/22 13:01:07 by wmonacho         ###   ########.fr       */
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
	size_t			space;

	pipe = line.find(" | ");
	if (pipe == std::string::npos)
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return ;
	}
	date = line.substr(0, pipe);
	if (checkDate(date))
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return ;
	}
	space = line.substr(pipe + 3).find_first_not_of(" ");
	if (line.substr(pipe + 3 + space).find_first_not_of("0123456789.") != std::string::npos)
	{
		std::cout << "Error: bad value." << std::endl;
		return ;
	}
	value = std::atof(line.substr(pipe + 3 + space).c_str());
	if (value < 0)
		std::cout << "Error: not a positive number." << std::endl;
	else if (value > 1000)
		std::cout << "Error: too large a number." << std::endl;
	else if (!line.substr(pipe + 3 + space).find_first_not_of("0123456789."))
		std::cout << "Error: bad value." << std::endl;
	else
	{
		databaseFeed();
		std::map<std::string, float>::const_iterator it = this->bitcoin_rates.lower_bound(date);
		if (it == this->bitcoin_rates.end())
    	{
    	    std::cout << "Error: no date found." << std::endl;
    	    return;
    	}
		if (it != this->bitcoin_rates.begin())
			it--;
		else
    	{
    	    std::cout << "Error: no smaller date found." << std::endl;
    	    return;
    	}
		std::cout << date << " => " << value << " = " 
			<< it->second * value << std::endl;
	}
}

int	BitcoinExchange::checkDate(std::string date)
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
	if (!checkMonth(std::atoi(date.substr(0, 4).c_str()), std::atoi(date.substr(y, i).c_str()), std::atoi(date.substr(i + 1, date.size()).c_str())))
		return (1);
	y = i + 1;
	date.find_first_not_of("0123456789", y);
	check = std::atoi(date.substr(y, date.size()).c_str());
	if ( date.size() - y != 2 || check < 1 || check > 31 ||
			date.find_first_not_of("0123456789", y) != std::string::npos)
		return (1);
	return (0);
}

void	BitcoinExchange::databaseFeed(void)
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

	while ( !(std::getline(database, line).eof()) )
	{
		coma = line.find(",");
		this->bitcoin_rates[line.substr(0, coma)] = std::atof(line.substr(coma + 1, std::string::npos).c_str());
	}
}

int	BitcoinExchange::checkMonth(int year, int month, int day)
{
	if (month == 2 && year % 4 != 0 && day > 28)
		return (0);
	else if ((month == 4 || month ==  6 || month == 9 || month == 11) && day > 30)
		return (0);
	else if (year % 4 == 0 && year % 100 == 0 && month == 2 && day > 28)
		return (0);
	return (1);
}