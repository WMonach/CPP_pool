/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:44:52 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/07 15:09:14 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int    argc, char **argv)
{
    Harl    inst;

    if (argc != 2)
	{
		std::cerr << "Harl can't complain, please enter other orders like : DEBUG, INFO, WARNING or ERROR" << std::endl;
		return (1);
	}
    inst.complain(argv[1]);
    return (0);
}