/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:28:58 by wmonacho          #+#    #+#             */
/*   Updated: 2023/04/13 17:12:32 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(PmergeMe const &rhs)
{
	*this = rhs;
}
PmergeMe&	PmergeMe::operator=(PmergeMe const &obj)
{
	this->_vector = obj._vector;
    this->_deque = obj._deque;
    return *this;
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

std::deque<int>&	PmergeMe::getDeque( void )
{
	return (this->_deque);
}


const int INSERTION_THRESHOLD = 16;

// Tri par insertion
void	PmergeMe::insertionSortVector(std::vector<int>& v, int left, int right)
{
    for (int i = left + 1; i <= right; ++i)
	{
        int tmp = v[i];
        int j = i - 1;
        while (j >= left && v[j] > tmp)
		{
            v[j + 1] = v[j];
            --j;
        }
        v[j + 1] = tmp;
    }
	// unsigned int i = 0;
	// while ( i < v.size())
	// {
	// 	std::cout << v[i] << std::endl;
	// 	i++;
	// }
}

// Tri fusion-insertion
void PmergeMe::mergeInsertSortVector(std::vector<int>& v, int left, int right)
{
    if (right - left <= INSERTION_THRESHOLD) {
        insertionSortVector(v, left, right);
    } else {
        int mid = (left + right) / 2;
        mergeInsertSortVector(v, left, mid);
        mergeInsertSortVector(v, mid + 1, right);
        std::inplace_merge(v.begin() + left, v.begin() + mid + 1, v.begin() + right + 1);
    }
}

// Tri complet d'un vecteur
void PmergeMe::sortVector(std::vector<int>& v)
{
    mergeInsertSortVector(v, 0, v.size() - 1);
	std::cout << "First Container After :  " ;
	for (std::vector<int>::iterator it = v.begin() ; it != v.end() ; it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::insertionSortDeque(std::deque<int>& d, int left, int right)
{
    for (int i = left + 1; i <= right; ++i)
	{
        int tmp = d[i];
        int j = i - 1;
        while (j >= left && d[j] > tmp)
		{
            d[j + 1] = d[j];
            --j;
        }
        d[j + 1] = tmp;
    }
	// unsigned int i = 0;
	// while ( i < v.size())
	// {
	// 	std::cout << v[i] << std::endl;
	// 	i++;
	// }
}

void mergeInsertSortDeque(std::deque<int>& d, int left, int right)
{
    if (left >= right) 
		return;
    if (right - left < 5)
    {
		insertionSortDeque(d, left, right);
        return;
    }
    int mid = (left + right) / 2;
    mergeInsertSortDeque(d, left, mid);
    mergeInsertSortDeque(d, mid + 1, right);
    std::inplace_merge(d.begin() + left, d.begin() + mid + 1, d.begin() + right + 1);
}

void mergeInsertSortDeque(std::deque<int>& d)
{
    mergeInsertSortDeque(d, 0, d.size() - 1);
	std::cout << "Second Container After :  " ;
	for (std::deque<int>::iterator it = d.begin() ; it != d.end() ; it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}