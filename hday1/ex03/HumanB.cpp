/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:39:28 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/16 10:30:37 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void): _humanB_weapon(NULL)
{
}

HumanB::HumanB(std::string name): _humanB_weapon(NULL)
{
	this->_name = name;
}

HumanB::~HumanB(void)
{
}

void	HumanB::setWeapon(Weapon &type)
{
	if (type.getType() == "")
		std::cout << "pls give him a real weapon" << std::endl;
	else
		this->_humanB_weapon = &type;
}

void	HumanB::attack(void) const
{
	if (this->_humanB_weapon)
		std::cout << this->_name << " attacks with their " << this->_humanB_weapon->getType() << std::endl;
	else
		std::cerr << this->_name << " don't have a weapon" << std::endl;
}