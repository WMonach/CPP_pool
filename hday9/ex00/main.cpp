/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:17:41 by will              #+#    #+#             */
/*   Updated: 2023/03/24 18:02:38 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	BitcoinExchangeLauncher(string *filename)
{
	BitcoinExchange	data;
	std::fstream	database;
	std::string		line;
	
	database.open(filename, std::fstream::in | std::fstream::out);
	if (!database.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		database.close();
		exit(1);
	}
	
	return ;
}

int main(int argc, char **argv)
{
	switch (argc)
	{
		case 1 :
			std::cerr << "Error: could not open file." << std::endl;
			return (1);
		case 2 :
			BitcoinExchangeLauncher(argv[1]);
			break ;
		default :
			std::cerr << "Wrong number of arguments." << std::endl;
			return (1);
	}
	return (0);
}