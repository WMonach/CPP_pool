/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:22:30 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/28 11:20:56 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
	protected :
	std::string	type;

	public :
	WrongAnimal( void );
	WrongAnimal( WrongAnimal const & obj);
	~WrongAnimal( void );

	void	makeSound( void ) const;
	const std::string&		getType( void ) const;
	WrongAnimal&	operator=( WrongAnimal const & obj);
	void			setType( std::string tip);
};

#endif