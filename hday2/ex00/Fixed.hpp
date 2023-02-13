/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:16:41 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/08 14:15:01 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	private :
	int					_storage;
	const static int	_bit = 8;
	
	public :
	Fixed(void);
	Fixed( Fixed const & src);
	~Fixed(void);

	Fixed& operator=( Fixed const & rhs);
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif