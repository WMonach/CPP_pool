/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:54:50 by wmonacho          #+#    #+#             */
/*   Updated: 2023/04/05 16:50:36 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void){ }

RPN::RPN(RPN const &rhs)
{
	*this = rhs;
}

RPN	&RPN::operator=(RPN const &obj)
{
	if (this != &obj)
	{
	}
	return (*this);
}

RPN::~RPN(void){ }

void	RPN::operation(char	c)
{
	double operand1;
   	double operand2;
	
	operand2 = _operands.top(); _operands.pop();
    operand1 = _operands.top(); _operands.pop();
    switch (c)
    {
        case '*':
            _operands.push(operand1 * operand2);
            break ;
        case '+':
            _operands.push(operand1 + operand2);
            break ;
        case '-':
            _operands.push(operand1 - operand2);
            break ;
        case '/':
            if (operand2 == 0)
                throw ArgInvalid();
            _operands.push(operand1 / operand2);
            break ;
    }
}

void	RPN::print_value( void )
{	
	std::cout << "result: " << _operands.top() << std::endl;
}

void	RPN::calculate(std::string calculation)
{
	for (size_t i = 0; i < calculation.size(); ++i)
	{
		if (calculation[i] == ' ')
			continue ;
		else if (isdigit(calculation[i]))
			_operands.push(calculation[i] - 48);
		else
		{
			if (_operands.size() < 2 || (_operands.top() == 0 && calculation[i] == '/'))
			{
				if (_operands.top() == 0 && calculation[i] == '/')
				throw(ArgInvalid()); //WARNING wrong error
			}
			operation(calculation[i]);
		}
	}
	print_value();
	return ;
}