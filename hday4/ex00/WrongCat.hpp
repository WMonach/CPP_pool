/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:21:33 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/16 16:59:33 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	protected :
	std::string	type;
	
	public :
	WrongCat( void );
	WrongCat( WrongCat const & obj);
	~WrongCat( void );
	
	void	makeSound( void ) const;
};

#endif