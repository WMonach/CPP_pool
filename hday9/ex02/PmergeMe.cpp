/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:28:58 by wmonacho          #+#    #+#             */
/*   Updated: 2023/04/12 17:41:14 by wmonacho         ###   ########.fr       */
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

void	PmergeMe::set(int nb)
{
	this->_vector.push_back(nb);
    this->_deque.push_back(nb);
}

std::vector<int>&	PmergeMe::getVector( void )
{
	return (this->_vector);
}

std::deque<int>	PmergeMe::getDeque( void )
{
	return (this->_deque);
}


const int INSERTION_THRESHOLD = 16;

// Tri par insertion
void	PmergeMe::insertionSort(std::vector<int>& v, int left, int right) {
    for (int i = left + 1; i <= right; ++i) {
        int tmp = v[i];
        int j = i - 1;
        while (j >= left && v[j] > tmp) {
            v[j + 1] = v[j];
            --j;
        }
        v[j + 1] = tmp;
    }
}

// Tri fusion-insertion
void PmergeMe::mergeInsertSort(std::vector<int>& v, int left, int right) {
    if (right - left <= INSERTION_THRESHOLD) {
        insertionSort(v, left, right);
    } else {
        int mid = (left + right) / 2;
        mergeInsertSort(v, left, mid);
        mergeInsertSort(v, mid + 1, right);
        std::inplace_merge(v.begin() + left, v.begin() + mid + 1, v.begin() + right + 1);
    }
}

// Tri complet d'un vecteur
void PmergeMe::sort(std::vector<int>& v)
{
    mergeInsertSort(v, 0, v.size() - 1);
	std::cout << "First Container After :  " ;
	for (std::vector<int>::iterator it = v.begin() ; it != v.end() ; it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}