/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:41:50 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/16 17:10:03 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ): type("")
{
	std::cout << "Animal is created" << std::endl;
}

Animal::Animal( Animal const & obj)
{
	this->type = obj.type;
	*this = obj;
}

Animal::~Animal( void )
{
	std::cout << "Animal destroyed" << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << "a lambda animal sound: UR BEAUTIFUL" << std::endl;
}

const std::string&	Animal::getType( void ) const
{
	return(this->type);
}

void	Animal::setType( std::string tip)
{
	this->type = tip;
}

Animal&	Animal::operator=( Animal const & obj)
{
	this->type = obj.type;
	return (*this);
}
