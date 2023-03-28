/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:17:41 by will              #+#    #+#             */
/*   Updated: 2023/03/28 13:09:29 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	parsing(string *filename)
{
	BitcoinExchange	data;
	std::fstream	database;
	std::string		line;
	
	database.open(filename, );
	if (database.open())
	{

	}

	return ;
}

int main(int argc, char **argv)
{
	switch(argc)
	{
		case 1 :
			std::cout << "ERROR: need the name of file as argument";
			return (1);
		case 2 :
			parsing(argv[1]);
			break;
		default :
			std::cout << "ERROR: Just need one argument";
			return (1);
	}
	return (0);
}