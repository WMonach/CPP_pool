/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:44:09 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/17 14:55:58 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private :
	Brain*	_Brain;

	protected :
	std::string	type;
	
	public :
	Cat( void );
	Cat( Cat const & obj);
	virtual ~Cat( void );
	
	void	makeSound( void ) const;
};

#endif