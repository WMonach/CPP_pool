/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:37:53 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/15 15:01:55 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	std::cout << "FragTrap is born" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

FragTrap::FragTrap( std::string name )
{
	std::cout << "FragTrap is born" << std::endl;
	this->_Name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
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

void	FragTrap::attack(const std::string& target)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << this->_Name << " Fart on " << target << std::endl;
		this->_EnergyPoints = this->_EnergyPoints - 1;
	}
	else
		theEnd("dead");
}

void	FragTrap::highFivesGuys( void )
{
	std::string	No = "";


	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "FragTrap ask for an highfive : ";
		while (No.length() < 1)
		{	
			std::getline(std::cin, No);
			std::cout << "FragTrap ask for an highfive  :";
		}
	}
	else
		theEnd("dead");
}