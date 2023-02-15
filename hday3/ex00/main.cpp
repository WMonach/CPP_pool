/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:31:27 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/15 13:26:25 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Jeangui("Jeangui");

	Jeangui.attack("Handsome Jack");
	Jeangui.takeDamage(40);
	Jeangui.beRepaired(4);
	Jeangui.takeDamage(60);
	Jeangui.beRepaired(8);
	Jeangui.takeDamage(10);
	Jeangui.takeDamage(1);
	Jeangui.beRepaired(1);
	Jeangui.takeDamage(3);
	Jeangui.beRepaired(8);
	Jeangui.takeDamage(17);
	Jeangui.attack("Handsome Jack");
	Jeangui.takeDamage(6);
	Jeangui.beRepaired(4);
	Jeangui.takeDamage(3);
	Jeangui.beRepaired(8);
	Jeangui.takeDamage(17);
	Jeangui.takeDamage(6);
	Jeangui.beRepaired(4);
	Jeangui.takeDamage(3);
	Jeangui.beRepaired(8);
	Jeangui.takeDamage(17);
	return (0);
}