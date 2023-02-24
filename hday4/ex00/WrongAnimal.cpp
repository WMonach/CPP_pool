/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:23:22 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/24 11:56:17 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): type("")
{
	std::cout << "WrongAnimal is created" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & obj): type(NULL)
{
	std::cout << "WrongAnimal is created" << std::endl;
	this->type = obj.type;
	*this = obj;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destroyed" << std::endl;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "a lambda WrongAnimal sound: UR BEAUTIFUL" << std::endl;
}

const std::string&	WrongAnimal::getType( void ) const
{
	return( this->type);
}

void	WrongAnimal::setType( std::string tip)
{
	this->type = tip;
}