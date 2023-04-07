/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:54:34 by wmonacho          #+#    #+#             */
/*   Updated: 2023/04/07 18:08:50 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool operator_check(std::string::iterator it) {

    if (*it == '+' || *it == '-' || *it == '*' || *it == '/')
        return (true);
    return (false);
}

void	rnp(std::string cmd)
{
	RPN	value;
	if (cmd.find_first_not_of("0123456789+-/* ") != std::string::npos)
		throw(InvalidChar());
	std::size_t _operator = cmd.find_first_of("+-*/");
	if (_operator == std::string::npos)
        throw(ArgInvalid());
	for (std::size_t i = _operator; i < cmd.size(); i++)
    {
        if ((i <= '9' && i >= '0') && ((i + 2) != '+'))
            throw ArgInvalid();
    }
	for(std::string::iterator it = cmd.begin(); it != cmd.end(); ++it)
    {
        if ((*it == ' ' && it == cmd.end() - 1))
            throw ArgInvalid();
        if ((it == cmd.end() - 1) && operator_check(it) == false)
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
			catch (const std::exception& e) 
			{
       			std::cerr << e.what() << std::endl;
			}
		default :
			std::cerr << "Wrong format" << std::endl;
			return (1);
	}
	return (0);
}