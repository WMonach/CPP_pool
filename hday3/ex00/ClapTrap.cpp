/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:32:30 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/10 15:34:53 by wmonacho         ###   ########.fr       */
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

void	ClapTrap::attack(const std::string& target)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << this->_Name << " fart on " << target << std::endl;
		this->_EnergyPoints - 1;
	}
	else
		this->_Name.theEnd();
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << this->_Name << " falled and take " << amount << " damage" << std::endl;
	}
	else
		this->_Name.theEnd();
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << this->_Name << " drink Pastis and gain " << amount << " HitPoints" << std::endl;
	}
	else
		this->_Name.theEnd();
}

void	ClapTrap::theEnd( void )
{
	if (this->_HitPoints <= 0 || this->_EnergyPoints <= 0)
	{
		std::cout << this->_Name << " is dead or exhausted and he can't do nothing (maybe he's faking)" << std::endl;
	}
}