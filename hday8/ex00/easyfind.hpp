/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:09:04 by will              #+#    #+#             */
/*   Updated: 2023/03/03 21:57:37 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iterator>

template <typename T>
typename T::const_iterator	easyfind(const T& container, int value)
{
	return (std::find(container.begin(), container.end(), value));
}

template <typename T>
typename T::iterator	easyfind(T& container, int value)
{
	return (std::find(container.begin(), container.end(), value));
}

#endif