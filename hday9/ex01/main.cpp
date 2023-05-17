/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:54:34 by wmonacho          #+#    #+#             */
/*   Updated: 2023/05/17 13:35:12 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool operator_check(std::string::iterator it) {

    if (*it == '+' || *it == '-' || *it == '*' || *it == '/')
        return (true);
    return (false);
}

int countOccurrences(const std::string& str, const std::string& characters) {
    int count = 0;
    for (std::string::size_type i = 0; i < str.length(); ++i) {
        if (characters.find(str[i]) != std::string::npos) {
            count++;
        }
    }
    return count;
}

void	rnp(std::string cmd)
{
	RPN	value;
	int	ope;
	int operands;
	
	if (cmd.find_first_not_of("0123456789+-/* ") != std::string::npos)
		throw(InvalidChar());
	std::size_t _operator = cmd.find_first_of("+-*/");
	ope = countOccurrences(cmd, "+-*/");
	operands = countOccurrences(cmd, "0123456789");
	if (operands - ope > 1)
		throw ArgInvalid();
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