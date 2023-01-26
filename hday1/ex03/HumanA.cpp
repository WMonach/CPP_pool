/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:38:23 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/26 18:50:12 by wmonacho         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(void)
{
}

HumanA::~HumanA(void)
{
}

HumanA::HumanA(std::string weapon)
{
	this->_weapon = weapon;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon << std::endl;
}