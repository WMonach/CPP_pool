/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:10:57 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/22 15:50:52 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	this->type = "Dog";
	std::cout << "Dog is born" << std::endl;
}

Dog::Dog( Dog const & obj) : Animal()
{
	*this = obj;
}

Dog::~Dog( void )
{
	std::cout << "Dog destroyed" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "a lambda Dog sound: WOOUR BEAUTIFUL" << std::endl;
}

 Dog&	Dog::operator=( Dog const & obj)
 {
	this->type = obj.type;
	return (*this);
 }