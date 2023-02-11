/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:48:21 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/30 16:59:53 by wmonacho         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private :
			std::string	_name;
			Weapon&		_humanA_weapon;

	public :
			HumanA(std::string name, Weapon& weapon);
			~HumanA(void);

			void	attack(void);

};

#endif