/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:20:49 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/28 11:21:43 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ): type("WrongCat")
{
	std::cout << "WrongCat is born" << std::endl;
}

WrongCat::WrongCat( WrongCat const & obj): WrongAnimal()
{
	std::cout << "WrongCat is born" << std::endl;
	this->type = obj.type;
	*this = obj;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destroyed" << std::endl;
}

void	WrongCat::makeSound( void )
{
	std::cout << "a lambda WrongCat sound: MIAUR BEAUTIFUL" << std::endl;
}

WrongCat&	WrongCat::operator=( WrongCat const & obj)
{
	this->type = obj.type;
	return (*this);
}