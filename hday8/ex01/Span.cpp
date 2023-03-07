/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:29:05 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/07 23:40:45 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void): _Containers(0)
{
	this->_SizeMax = 0;
}

Span::Span( unsigned int n): _Containers(0)
{
	if (n < 2)
		throw(std::exception());
	this->_Containers.reserve(n);
	this->_SizeMax = n;
}

Span::Span( Span const & rhs)
{
	*this = rhs;
}

Span::~Span(void)
{

}

const Span& Span::operator=( Span const & obj)
{
	this->_Containers = obj._Containers;
	return (*this);
}

void	Span::addNumber( int Number )
{
	if (this->_Containers.size() >= this->_SizeMax)
		throw(std::exception());
	this->_Containers.push_back(Number);
}

int		Span::shortestSpan( void )
{	
	std::vector<unsigned int>::iterator	it1;
	std::vector<unsigned int>::iterator	it2;
	int							diff;
	int							ShortDiff;
	
	if (this->_Containers.size() < 2)
		throw(std::exception());
	sort(this->_Containers.begin(), this->_Containers.end());
	it1 = this->_Containers.begin();
	it2 = ++this->_Containers.begin();
	ShortDiff = (*it2) - (*it1);
	for (unsigned int i = 0; i < this->_Containers.size() - 1; ++i)
	{
		diff = (*it2) - (*it1);
		if (ShortDiff > diff)
			ShortDiff = diff;
		++it1;
		++it2;
	}
	return (ShortDiff);
}

int		Span::longestSpan( void )
{
	std::vector<unsigned int>	tmp;
	int					diff;
	
	if (this->_Containers.size() < 2)
		throw(std::exception());
	tmp = this->_Containers;
	std::sort(tmp.begin(), tmp.end());
	diff = *(--(tmp.end())) - *(tmp.begin());
	return (diff);
}

const std::vector<unsigned int>&	Span::getContainer( void )
{
	return (this->_Containers);
}

void	Span::populate( const std::vector<unsigned int>::iterator&	begin, const std::vector<unsigned int>::iterator& end)
{
	for  ( std::vector<unsigned int>::iterator it = begin; it != end; ++it)
	{
        this->addNumber(*it);
	}
}

void	Span::sortContainer( void )
{
	std::sort(this->_Containers.begin(), this->_Containers.end());
}