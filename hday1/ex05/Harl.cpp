/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:10:05 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/07 15:03:10 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->_cmd[0] = "DEBUG";
	this->_cmd[1] = "INFO";
	this->_cmd[2] = "WARNING";
	this->_cmd[3] = "ERROR";
	
	this->_pointers_function[0] = &Harl::debug;
	this->_pointers_function[1] = &Harl::info;
	this->_pointers_function[2] = &Harl::warning;
	this->_pointers_function[3] = &Harl::error;
}

Harl::~Harl(void)
{	
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string comments)
{
	int	i = 0;
	while (i < 4)
	{
		if (comments == this->_cmd[i])
		{
			(this->*_pointers_function[i])();
			return ;
		}
		i++;
	}
	std::cout << "you are lucky Harl does not want to complain" << std::endl;
	return ;
}