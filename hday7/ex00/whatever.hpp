/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:33:11 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/03 13:24:29 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T &one, T &two)
{
	T	tmp;
	
	tmp = one;
	one = two;
	two = tmp;
}

template <typename T>
T	min(T & one, T & two)
{
	if (one < two)
		return (one);
	return (two);
}

template <typename T>
T const	min(T const &one, T const &two)
{
	if (one < two)
		return (one);
	return (two);
}

template <typename T>
T	max(T &one, T &two)
{
	if (one > two)
		return (one);
	return (two);
}

template <typename T>
T const	max(T const &one, T const &two)
{
	if (one > two)
		return (one);
	return (two);
}


#endif