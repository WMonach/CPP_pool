/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:44:42 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/22 16:20:08 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include "Animal.hpp"

class Brain
{
	private :
	std::string	ideas[100];
	
	public :
	Brain( void );
	Brain( Brain const & obj );
	~Brain( void );
	Brain&	operator=( Brain const & rhs);

	std::string getIdea( int nb ) const;
	void    setIdeas(int nb, std::string idea);
};

#endif