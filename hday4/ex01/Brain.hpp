/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:44:42 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/20 16:15:27 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include "Animal.hpp"

class Brain
{
	private :
	
	public :
	std::string	ideas[100];
	Brain( void );
	Brain( Brain const & obj );
	~Brain( void );
};

#endif