/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:39:28 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/11 21:53:59 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void): _humanB_weapon(nullptr)
{
}

HumanB::HumanB(std::string name): _humanB_weapon(nullptr)
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