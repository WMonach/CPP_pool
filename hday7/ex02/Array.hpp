/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 13:27:17 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/03 15:48:21 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private :
	T*				_tab;
	int	_size;
	
	public :
	Array( void )
	{
		_tab = new T;
		this->_size = 0;
	}
	
	Array( unsigned int n)
	{
		_tab = new T[n];
		this->_size = n;
	}
	
	Array( int n)
	{
		if (n < 0)
			throw(std::exception());
		_tab = new T[n];
		this->_size = n;
	}
	
	Array( Array const & rhs)
	{
		this->_size = rhs._size;
		this->_tab = new T[this->_size];
		*this = rhs;
		
	}
	~Array( void )
	{
		if(this->_tab != NULL)
			delete [] this->_tab;
	}
	
	const Array &	operator=( Array const & obj)
	{
		this->_size = obj._size;
		for (int i = 0; i < this->_size; i++)
		{
			this->_tab[i] = obj._tab[i];
		}
		return (*this);
	}
	
	T &	operator[]( int index )
	{
		if (index < 0 || index >= (this->_size))
			throw(std::exception());
		return (this->_tab[index]);
	}
	
	unsigned int	size( void ) const
	{
		return (this->_size);
	}
};
#endif