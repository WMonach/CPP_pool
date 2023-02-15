/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:31:27 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/15 14:35:40 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	Jeangui("Jeanvalguav");
	ClapTrap	Guijean("Jeanguavguav");

	Jeangui.attack("Kurstby");
	Guijean.attack("FullStuckMan");
	Guijean.takeDamage(6);
	Jeangui.takeDamage(40);
	Jeangui.beRepaired(4);
	Jeangui.takeDamage(60);
	Jeangui.guardGate();
	Guijean.takeDamage(60);
	Guijean.beRepaired(4);
	Jeangui.beRepaired(4);
	Jeangui.beRepaired(8);
	Jeangui.takeDamage(20);
	Jeangui.takeDamage(1);
	return (0);
}