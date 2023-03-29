/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:17:41 by will              #+#    #+#             */
/*   Updated: 2023/03/29 18:34:28 by will             ###   ########lyon.fr   */
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