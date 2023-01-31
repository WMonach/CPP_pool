/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:18:37 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/27 19:56:18 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private :
			std::string	_type;

	public :
			Weapon(void);
			Weapon(std::string type);
			~Weapon(void);
			Weapon	getType(void);
			void	setType(Weapon new_type);
};

#endif