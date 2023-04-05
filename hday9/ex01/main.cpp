/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:54:34 by wmonacho          #+#    #+#             */
/*   Updated: 2023/04/05 17:13:25 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void	rnp(std::string cmd)
{
	RPN	value;
	if (cmd.find_first_not_of("0123456789+-/* ") != std::string::npos)
		throw(InvalidChar());
	std::size_t _operator = cmd.find_first_of("+-*/");
	for (std::size_t i = _operator; i < cmd.size(); i++)
    {
        if ((i <= '9' && i >= '0') && ((i + 2) != '+'))
            throw ArgInvalid();
    }
	value.calculate(cmd);
}

int	main(int argc, char **argv)
{
	switch (argc)
	{		
		case 2 :
			try
			{
				rnp(argv[1]);
				break;
			}
			catch (const std::exception& e) {
       			std::cerr << e.what() << std::endl;
			}
		default :
			std::cerr << "Wrong format" << std::endl;
			return (1);
	}
	return (0);
}