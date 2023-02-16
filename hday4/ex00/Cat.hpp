/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:44:09 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/16 16:54:51 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat: public Animal
{
	protected :
	std::string	type;
	
	public :
	Cat( void );
	Cat( Cat const & obj);
	virtual ~Cat( void );
	Cat&	operator=( Cat const & obj );
	void	makeSound( void ) const;
};

#endif