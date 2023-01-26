/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:39:28 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/26 18:51:21 by wmonacho         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon << std::endl;
}