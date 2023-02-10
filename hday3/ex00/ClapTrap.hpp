/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:40:42 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/10 17:29:39 by wmonacho         ###   ########.fr       */
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
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const & obj );
	~ClapTrap( void );
	ClapTrap&	operator=( ClapTrap const & obj);
	// ClapTrap	operator+( ClapTrap const & rhs)const;
	// ClapTrap	operator-( ClapTrap const & rhs)const;
	// ClapTrap&	operator++( void );	// Prefix increment operator.
	// ClapTrap	operator++( int );	// Postfix increment operator.
	// ClapTrap&	operator--( void );	// Prefix decrement operator.
	// ClapTrap	operator--( int );	// Postfix decrement operator.
	// bool	operator==( ClapTrap const & rhs)const;
	// bool	operator>=( ClapTrap const & rhs)const;
	// bool	operator<=( ClapTrap const & rhs)const;
	// bool	operator!=( ClapTrap const & rhs)const;
	// bool	operator<( ClapTrap const & rhs)const;
	// bool	operator>( ClapTrap const & rhs)const;
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	theEnd( std::string name );
	
};

#endif