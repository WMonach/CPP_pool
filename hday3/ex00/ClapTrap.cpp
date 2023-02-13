/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:32:30 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/13 17:25:00 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
}

ClapTrap::ClapTrap( std::string name )
{
	this->_Name = name;
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
}

ClapTrap::ClapTrap( ClapTrap const & obj )
{
	this->_HitPoints = obj._HitPoints;
	this->_EnergyPoints = obj._EnergyPoints;
	this->_AttackDamage = obj._AttackDamage;
	*this = obj;
}

ClapTrap::~ClapTrap( void )
{
}

ClapTrap&	ClapTrap::operator=( ClapTrap const & obj)
{
	this->_HitPoints = obj._HitPoints;
	this->_EnergyPoints = obj._EnergyPoints;
	this->_AttackDamage = obj._AttackDamage;
	return (*this);
}

void	ClapTrap::theEnd( std::string action )
{
	if (this->_HitPoints <= 0 || this->_EnergyPoints <= 0)
	{
		std::cout << this->_Name << " is dead or exhausted and he can't do nothing (maybe he's faking)" << std::endl;
	}
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << this->_Name << " fart on " << target << std::endl;
		this->_EnergyPoints = this->_EnergyPoints - 1;
	}
	else
		theEnd("dead");
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << this->_Name << " falled and take " << amount << " damage" << std::endl;
		this->_HitPoints = this->_HitPoints - amount;
	}
	else
		theEnd("dead");
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << this->_Name << " drink Pastis and gain " << amount << " HitPoints" << std::endl;
		this->_HitPoints = this->_HitPoints + amount;
		this->_EnergyPoints = this->_EnergyPoints - 1;
	}
	else
		theEnd("dead");
}
