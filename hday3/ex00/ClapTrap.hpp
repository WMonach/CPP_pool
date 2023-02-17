/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:40:42 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/17 13:34:32 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	private	:
	std::string	_Name;
	int			_HitPoints;
	int			_EnergyPoints;
	int			_AttackDamage;

	public	:
	ClapTrap( void );
	ClapTrap( const std::string &name );
	ClapTrap( ClapTrap const & obj );
	~ClapTrap( void );
	ClapTrap&	operator=( ClapTrap const & obj);
	

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	theEnd( const std::string &name );
	
};

#endif