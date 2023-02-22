/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:37:53 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/17 14:13:07 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	std::cout << "FragTrap is born" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap::FragTrap( std::string name )
{
	std::cout << "FragTrap is born" << std::endl;
	this->_Name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap::FragTrap( FragTrap const & obj ): ClapTrap()
{
	this->_HitPoints = obj._HitPoints;
	this->_EnergyPoints = obj._EnergyPoints;
	this->_AttackDamage = obj._AttackDamage;
	*this = obj;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destroyed" << std::endl;
}

FragTrap&	FragTrap::operator=( FragTrap const & obj)
{
	this->_HitPoints = obj._HitPoints;
	this->_EnergyPoints = obj._EnergyPoints;
	this->_AttackDamage = obj._AttackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys( void )
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << this->_Name << " ask for an highfive, pls ?" << std::endl;
	}
	else
		theEnd("dead");
}