/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 19:34:31 by will              #+#    #+#             */
/*   Updated: 2023/03/07 17:16:23 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>
#include <stdlib.h>
#include <time.h>
#include <string>

class Span
{
		private :
		unsigned int					_SizeMax;
		std::vector<int>				_Containers;
		
		public :
		Span( void );
		Span( unsigned int n);
		Span( Span const & rhs);
		~Span( void );
		const Span&	operator=( Span const & obj);
		
		void	addNumber( int	Number );
		int		shortestSpan( void );
		int		longestSpan( void );
		const std::vector<int>&	getContainer( void );
		void	generate( unsigned int number);
		
};

#endif