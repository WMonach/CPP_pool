/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:10:57 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/17 14:57:55 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog( void ): type("Dog")
{
	this->_Brain = new Brain();
	std::cout << "Dog is born" << std::endl;
}

Dog::Dog( Dog const & obj): Animal()
{
	this->_Brain = new Brain(*(obj.getBrain()));
	this->type = obj.type;
}

Dog::~Dog( void )
{
	delete this->_Brain;
	std::cout << "Dog destroyed" << std::endl;
}

Dog&	Dog::operator=( Dog const & obj)
{
	delete this->_Brain;
	this->_Brain = new Brain(*(obj.getBrain()));
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