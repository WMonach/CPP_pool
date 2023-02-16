/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:52:15 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/16 10:38:06 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ): _value(0.0f)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int integer ): _value(integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = integer * (1 << 8);
}

Fixed::Fixed( float number )
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(number * (1 << 8));
}

Fixed::Fixed( Fixed const & src): _value(src._value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=( Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = rhs._value;
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_bit);
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_value / (float)(1 << 8));
}

int	Fixed::toInt( void ) const
{
	return (this->_value / (1 << 8));
}

int	Fixed::getValue( void ) const
{
	return (this->_value);
}

std::ostream	&operator<<( std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}