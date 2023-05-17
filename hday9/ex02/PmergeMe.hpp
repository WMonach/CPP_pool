/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 14:28:26 by wmonacho          #+#    #+#             */
/*   Updated: 2023/05/17 16:11:03 by wmonacho         ###   ########.fr       */
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
#include <cstdlib>


class PmergeMe 
{
	private :
		std::vector<size_t>	_vector;
		std::deque<size_t>		_deque;
		
		void	mergeInsertSortVector(std::vector<size_t>& v, int left, int right);
		void	insertionSortVector(std::vector<size_t>& v, int left, int right);
		void	mergeInsertSortDeque(std::deque<size_t>& v, int left, int right);
		void	insertionSortDeque(std::deque<size_t>& d, int left, int right);

	public :
		PmergeMe(void);
		PmergeMe(PmergeMe const &rhs);
		PmergeMe&	operator=(PmergeMe const &obj);
		~PmergeMe(void);
		
		void	set(size_t nb);
		std::vector<size_t>&		getVector( void );
		std::deque<size_t>&		getDeque( void );
		void	sortVector(std::vector<size_t>& v);
		void	sortDeque(std::deque<size_t>& d);
};

class Exception: public std::exception
{
	protected:
        std::string msg;
    public:
        Exception() {
            this->msg = "Exception : ";
        }

        Exception(std::exception exception) {
            this->msg = exception.what() + msg;
        }

        ~Exception()throw(){};

        virtual char const * what() const throw() {
            return msg.c_str();
        };
}

class  NotDigit: public Exception
{   public:
        NotDigit() {
            this->msg += "it's not a digit";
        }
};

class  : public Exception
{   public:
        () {
            this->msg += "";
        }
};

#endif