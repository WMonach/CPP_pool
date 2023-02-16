/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:52:20 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/16 10:39:48 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
	private :
	static const int	_bit = 8;
	int			_value;
	
	public :
	Fixed( void );
	Fixed( int integer );
	Fixed( float number );
	Fixed( Fixed const & src );
	~Fixed( void );
	
	Fixed&	operator=( Fixed const & rhs);
	bool	operator==( Fixed const & rhs)const;
	bool	operator>=( Fixed const & rhs)const;
	bool	operator<=( Fixed const & rhs)const;
	bool	operator!=( Fixed const & rhs)const;
	bool	operator<( Fixed const & rhs)const;
	bool	operator>( Fixed const & rhs)const;
	Fixed	operator+( Fixed const & rhs)const;
	Fixed&	operator++( void );	// Prefix increment operator.
	Fixed	operator++( int );	// Postfix increment operator.
	Fixed&	operator--( void );	// Prefix decrement operator.
	Fixed	operator--( int );	// Postfix decrement operator.
	Fixed	operator-( Fixed const & rhs)const;
	Fixed	operator*( Fixed const & rhs)const;
	Fixed	operator/( Fixed const & rhs)const;
	static Fixed&		min(Fixed & one, Fixed & two);
	static const Fixed&	min(const Fixed & one, const Fixed & two);
	static Fixed&		max(Fixed & one, Fixed & two);
	static const Fixed&	max(const Fixed & one, const Fixed & two);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw);
	int		getValue( void ) const;
	int 	toInt( void ) const;
	float	toFloat( void ) const;
};

std::ostream	&operator<<( std::ostream & o, Fixed const & rhs);

#endif