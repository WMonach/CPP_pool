/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:31:27 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/21 22:15:55 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Jeangui("Jeangui");

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