/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:54:09 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/28 13:07:33 by wmonacho         ###   ########.fr       */
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