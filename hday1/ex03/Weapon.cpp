/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:56:40 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/27 19:55:27 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::~Weapon(void)
{
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon	Weapon::getType(void)
{
}

void	Weapon::setType(Weapon new_type)
{
}