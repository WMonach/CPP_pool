/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:52:07 by wmonacho          #+#    #+#             */
/*   Updated: 2023/05/17 11:26:52 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>
# include <string>
# include <stdlib.h>

class BitcoinExchange
{
	private :
		std::map<std::string, float>	bitcoin_rates;
		
		int		checkDate(std::string date);
		void	databaseFeed(void);
		int		checkMonth(int year, int month, int day);

	public :
		BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const &rhs);
		BitcoinExchange &operator=(BitcoinExchange const &obj);
		~BitcoinExchange(void);
		
		void	printBitcoin( std::string line);

};

#endif