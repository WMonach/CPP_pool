/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:17:41 by will              #+#    #+#             */
/*   Updated: 2023/03/21 17:41:34 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	parsing(string *filename)
{
	
	return ;
}

int main(int argc, char **argv)
{
	std::map<std::string, float>	bitcoin_rates;
	if (argc != 2)
	{
		parsing(argv[1]);
		return (0);
	}
	if (argc == 1)
		std::cout << "Error: could not open file." << std::endl;
	else
		std::cout << "Error: Too many argument" << std::endl;
	return (1);
}