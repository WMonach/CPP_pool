/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:10:57 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/22 16:44:11 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog( void )
{
	this->type = "Dog";
	this->_Brain = new Brain();
	std::cout << "Dog is born" << std::endl;
}

Dog::Dog( Dog const & obj): Animal()
{
	this->_Brain = new Brain();
	*this->_Brain = *obj._Brain;
	this->type = obj.type;
}

Dog::~Dog( void )
{
	delete this->_Brain;
	std::cout << "Dog destroyed" << std::endl;
}

Dog&	Dog::operator=( Dog const & obj)
{
	*this->_Brain = *obj._Brain;
	this->type = obj.type;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "a lambda Dog sound: WOOUR BEAUTIFUL" << std::endl;
}

Brain	*Dog::getBrain( void ) const
{
	return (this->_Brain);
}