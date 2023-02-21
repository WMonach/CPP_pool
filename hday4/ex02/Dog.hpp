/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:44:36 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/17 14:56:06 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private :
	Brain*	_Brain;
	
	protected :
	std::string	type;
	
	public :
	Dog( void );
	Dog( Dog const & obj);
	virtual ~Dog( void );
	Dog	&operator=( Dog const & obj);
	
	void	makeSound( void ) const;
	Brain	*getBrain( void ) const;
};

#endif