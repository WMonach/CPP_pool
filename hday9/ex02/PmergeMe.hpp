/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 14:28:26 by wmonacho          #+#    #+#             */
/*   Updated: 2023/04/12 16:59:33 by wmonacho         ###   ########.fr       */
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
		
		void	mergeInsertSort(std::vector<int>& v, int left, int right);
		void	insertionSort(std::vector<int>& v, int left, int right);
	public :
		PmergeMe(void);
		PmergeMe(PmergeMe const &ref);
		PmergeMe&	operator=(PmergeMe const &ref);
		~PmergeMe(void);
		
		void	set(int nb);
		std::vector<int>&	getVector( void );
		std::deque<int>		getDeque( void );
		void	sort(std::vector<int>& v);
};

#endif