/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:49:17 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/08 16:33:03 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private :
			std::string	_name;
			Weapon		*_humanB_weapon;
	public :
			HumanB(void);
			HumanB(std::string name);
			~HumanB(void);

			void	setWeapon(Weapon &type);
			void	attack(void) const;
};

#endif