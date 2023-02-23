/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:10:25 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/23 17:10:08 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
	this->_Brain = new Brain();
	std::cout << "Cat is born" << std::endl;
}

Cat::Cat( Cat const & obj): Animal()
{
	this->_Brain = new Brain();
	*this->_Brain = *obj._Brain;
	this->type = obj.type;
}

Cat::~Cat( void )
{
	delete this->_Brain;
	std::cout << "Cat destroyed" << std::endl;
}

Cat&	Cat::operator=( Cat const & obj)
{
	*this->_Brain = *obj._Brain;
	this->type = obj.type;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "a lambda Cat sound: MIAUR BEAUTIFUL" << std::endl;
}

Brain	*Cat::getBrain( void ) const
{
	return ( this->_Brain);
}