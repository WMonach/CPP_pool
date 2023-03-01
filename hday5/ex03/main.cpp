/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:08:17 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/01 21:31:01 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Bureaucrat InCoke("Jerome_Powell", 60);
	Bureaucrat NoTime("GeorgeDeLaCompta", 35);
	Bureaucrat NeedToSleep("Intern", 120);
	Bureaucrat DoNothing("Trash", 150);
	Intern	BigTrash;
	Form*	form;

	try {
		InCoke.promotion();
		InCoke.retrograde();
		form = BigTrash.MakeForm("ShrubberyCreationForm", "time");
		delete form;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "================" << std::endl;
    try {
	    InCoke.promotion();
	    InCoke.promotion();
	    InCoke.promotion();
	    InCoke.retrograde();
		form = BigTrash.MakeForm("PresidentialPardonForm", "time");
		delete form;
    }
    catch (std::exception& e)
    {
       std::cerr << e.what() << std::endl;
    }
	try {
		InCoke.promotion();
		InCoke.retrograde();
		form = BigTrash.MakeForm("RobotomyRequestForm", "time");
		delete form;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try {
		InCoke.promotion();
		InCoke.retrograde();
		form = BigTrash.MakeForm("RobotomyRequestFor", "time");
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try {
		InCoke.promotion();
		InCoke.retrograde();
		form = BigTrash.MakeForm("NotForm", "time");
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}