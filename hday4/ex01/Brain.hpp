/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:44:42 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/17 15:31:35 by wmonacho         ###   ########.fr       */
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
};

#endif