/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:28:58 by wmonacho          #+#    #+#             */
/*   Updated: 2023/04/07 18:08:05 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(PmergeMe const &ref)
{
	*this = ref;
}
PmergeMe&	PmergeMe::operator=(PmergeMe const &ref)
{
	*this = ref;
	return (*this);
}

PmergeMe::~PmergeMe(void) {}