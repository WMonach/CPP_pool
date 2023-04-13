/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 14:28:26 by wmonacho          #+#    #+#             */
/*   Updated: 2023/04/13 17:12:15 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <deque>
#include <iterator>
#include <limits.h>
#include <cstring>
#include <sys/time.h>
#include <time.h>
#include <algorithm>


class PmergeMe 
{
	private :
		std::vector<int>	_vector;
		std::deque<int>		_deque;
		
		void	mergeInsertSortVector(std::vector<int>& v, int left, int right);
		void	insertionSortVector(std::vector<int>& v, int left, int right);
		void	mergeInsertSortDeque(std::deque<int>& v, int left, int right);
		void	insertionSortDeque(std::deque<int>& v, int left, int right);

	public :
		PmergeMe(void);
		PmergeMe(PmergeMe const &rhs);
		PmergeMe&	operator=(PmergeMe const &obj);
		~PmergeMe(void);
		
		void	set(int nb);
		std::vector<int>&		getVector( void );
		std::deque<int>&		getDeque( void );
		void	sortVector(std::vector<int>& v);
		void	sortDeque(std::deque<int>& d);
};

#endif