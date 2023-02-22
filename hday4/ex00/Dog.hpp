/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:44:36 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/22 15:39:39 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class Dog: public Animal
{
	public :
	Dog( void );
	Dog( Dog const & obj);
	virtual ~Dog( void );
	Dog&	operator=( Dog const & obj);
	void	makeSound( void ) const;
};

#endif