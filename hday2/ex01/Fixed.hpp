/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:52:20 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/16 10:38:00 by wmonacho         ###   ########.fr       */
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
	
	Fixed& operator=( Fixed const & rhs);
	
	float toFloat( void ) const;
	int toInt( void ) const;
	int	getRawBits( void ) const;
	int	getValue( void ) const;
};

std::ostream	&operator<<( std::ostream & o, Fixed const & rhs);

#endif