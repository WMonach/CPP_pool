/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:41:57 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/26 14:56:50 by wmonacho         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name );

int	main(void)
{
	int	i = 0;
	Zombie*	horde;

	horde = zombieHorde(5, "Ratounet");
	while (i < 5)
	{
		horde[i].annouce();
		i++;
	}
	delete[] horde;
}