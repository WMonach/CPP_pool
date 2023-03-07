/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:54:19 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/07 17:01:45 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <list>
#include <time.h>
#include <stdlib.h>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() {}
    MutantStack(const MutantStack<T>& src)
    {
        *this = src;
    }
    MutantStack<T>& operator=(const MutantStack<T>& rhs)
    {
        this->c = rhs.c;
        return *this;
    }
    ~MutantStack() {}

    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
};

#endif