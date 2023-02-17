/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:10:25 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/17 14:58:27 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ): type("Cat")
{
	this->_Brain = new Brain();
	std::cout << "Cat is born" << std::endl;
}

Cat::Cat( Cat const & obj): Animal()
{
	this->_Brain = obj._Brain;
	this->type = obj.type;
	return (*this);
}

Cat::~Cat( void )
{
	if (this->_Brain)
		delete this->_Brain;
	std::cout << "Cat destroyed" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "a lambda Cat sound: MIAUR BEAUTIFUL" << std::endl;
}