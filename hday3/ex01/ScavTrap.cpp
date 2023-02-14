/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:07:31 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/14 19:01:21 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
}

ScavTrap::ScavTrap( ScavTrap const & obj )
{
	this->_HitPoints = obj._HitPoints;
	this->_EnergyPoints = obj._EnergyPoints;
	this->_AttackDamage = obj._AttackDamage;
	*this = obj;
}

ScavTrap::~ScavTrap( void )
{
}

ScavTrap&	ScavTrap::operator=( ScavTrap const & obj)
{
	this->_HitPoints = obj._HitPoints;
	this->_EnergyPoints = obj._EnergyPoints;
	this->_AttackDamage = obj._AttackDamage;
	return (*this);
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap has entered Gate keeper mode" << std::endl;
}