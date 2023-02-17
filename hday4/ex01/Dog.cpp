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

Dog::Dog( void ): type("Dog")
{
	this->_Brain = new Brain();
	std::cout << "Dog is born" << std::endl;
}

Dog::Dog( Dog const & obj): Animal()
{
	this->_Brain = obj._Brain;
	this->type = obj.type;
}

Dog::~Dog( void )
{
	if (this->_Brain)
		delete this->_Brain;
	std::cout << "Dog destroyed" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "a lambda Dog sound: WOOUR BEAUTIFUL" << std::endl;
}