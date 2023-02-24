/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:21:19 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/24 11:56:44 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "New Brain created" << std::endl;
}

Brain::Brain( Brain const & obj)
{
    std::cout << "New Brain created" << std::endl;
   *this = obj;
}

Brain&	Brain::operator=( Brain const & rhs)
{
	int i = -1;

    while (++i < 100)
    {
        this->ideas[i] = rhs.getIdea(i);
    }
	return (*this);
}

Brain::~Brain( void )
{
    std::cout << "old Brain destroy" << std::endl;
}

std::string Brain::getIdea( int nb ) const
{
    if (nb < 100 && nb >= 0)
        return (this->ideas[nb]);
    else
        std::cerr << "No idea at this index" << std::endl;
    return ("");
}

void    Brain::setIdeas(int nb, std::string idea)
{
    if ( nb >= 0 && nb < 100)
        this->ideas[nb] = idea;
    else
        std::cerr << "can't create new idea at this index" << std::endl;
}