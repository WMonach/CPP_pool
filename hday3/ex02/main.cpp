/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:31:27 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/15 14:59:06 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap	Jeangui("Jeanvalguav");
	ClapTrap	Guijean("Jeanguavguav");
	FragTrap	Jeanguibolle("Maxguav");

	Jeangui.attack("Kurstby");
	Guijean.attack("FullStuckMan");
	Jeanguibolle.attack("SpooderMan");
	Jeanguibolle.highFivesGuys();
	Jeangui.takeDamage(40);
	Guijean.takeDamage(6);
	Jeanguibolle.takeDamage(6);
	Jeangui.beRepaired(4);
	Guijean.beRepaired(4);
	Jeanguibolle.beRepaired(4);
	for (int i = 0; i < 60; i++)
	{
		Jeangui.beRepaired(4);
		Jeanguibolle.beRepaired(4);
	}
	return (0);
}