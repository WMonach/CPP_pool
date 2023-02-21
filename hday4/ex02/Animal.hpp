/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:42:20 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/16 16:50:37 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

#define NumberOfAnimals 10

class Animal
{
	protected :
	std::string	type;

	public :
	Animal( void );
	Animal( Animal const & obj);
	virtual ~Animal( void );
	Animal&	operator=( Animal const & obj);
	virtual void	makeSound( void ) const = 0;
	const std::string&		getType( void ) const;
	void			setType( std::string tip);
};

#endif