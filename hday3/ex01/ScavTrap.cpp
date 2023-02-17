/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:07:31 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/17 13:54:16 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	std::cout << "ScavTrap is born" << std::endl;
	this->_Name = "Default";
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap( const std::string &name )
{
	std::cout << "ScavTrap is born" << std::endl;
	this->_Name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap( ScavTrap const & obj ): ClapTrap()
{
	this->_HitPoints = obj._HitPoints;
	this->_EnergyPoints = obj._EnergyPoints;
	this->_AttackDamage = obj._AttackDamage;
	*this = obj;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destroyed" << std::endl;
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
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "ScavTrap has entered Gate keeper mode" << std::endl;
	}
	else
		theEnd("dead");
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << this->_Name << " slap " << target << std::endl;
		this->_EnergyPoints = this->_EnergyPoints - 1;
	}
	else
		theEnd("dead");
}