/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 14:28:26 by wmonacho          #+#    #+#             */
/*   Updated: 2023/04/07 19:25:26 by wmonacho         ###   ########.fr       */
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


class PmergeMe 
{
	private :
		std::vector<int>	_vector;
		std::deque<int>		_deque;
	public :
		PmergeMe(void);
		PmergeMe(PmergeMe const &ref);
		PmergeMe&	operator=(PmergeMe const &ref);
		~PmergeMe(void);
};

#endif