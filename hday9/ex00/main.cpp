/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:17:41 by will              #+#    #+#             */
/*   Updated: 2023/05/17 10:38:01 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	parsing(char *filename)
{
	BitcoinExchange	data;
	std::fstream	database;
	std::string		line;
	
	if (!database.is_open())
		database.open(filename, std::fstream::in | std::fstream::out);
	if (database.is_open())
	{
		while ( !(std::getline(database, line).eof()) )
		{
			if (!line.compare("date | value"))
				continue ;
			data.printBitcoin(line);
			line.clear();
		}
		if (line.size() > 0)
		{
			data.printBitcoin(line);
			line.clear();
		}
	}
	else 
	{
		database.open(filename, std::fstream::in | std::fstream::out);
		if (!database.is_open())
		{
			std::cout << "ERROR: can't open file" << std::endl;
			database.close();
			return ;
		}
		while ( !(std::getline(database, line).eof()) )
		{
			if (!line.compare("date | value"))
				continue ;
			data.printBitcoin(line);
			line.clear();
		}
		if (line.size() > 0)
		{
			data.printBitcoin(line);
			line.clear();
		}
	}
	database.close();
	return ;
}

int main(int argc, char **argv)
{
	switch(argc)
	{
		case 1 :
			std::cout << "ERROR: need the name of file as argument" << std::endl;
			return (1);
		case 2 :
			parsing(argv[1]);
			break;
		default :
			std::cout << "ERROR: Just need one argument" << std::endl;
			return (1);
	}
	return (0);
}