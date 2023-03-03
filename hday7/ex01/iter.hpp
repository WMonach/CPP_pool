/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:12:23 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/03 13:06:26 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T const *addrtab, int sizetab, void (*f)(T const &))
{
	for(int i = 0; i < sizetab; i++ )
	{
		(*f)(addrtab[i]);
	}
}

template<typename T>
void	iter(T *addrtab, int sizetab, void (*f)(T &))
{
	for(int i = 0; i < sizetab; i++ )
	{
		(*f)(addrtab[i]);
	}
}

#endif