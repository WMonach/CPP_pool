/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:08:17 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/27 19:00:45 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat InCoke("Jerome_Powell", 60);
	Bureaucrat NoTime("GeorgeDeLaCompta", 35);
	Bureaucrat NeedToSleep("Intern", 120);
	Bureaucrat DoNothing("Trash", 150);
	Form	*form = NULL;

	try {
		InCoke.promotion();
		InCoke.retrograde();
        form = new RobotomyRequestForm("TimeForThePlanet");
		form->beSigned(InCoke);
		form->execute(InCoke);
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
    }
    catch (std::exception& e)
    {
       std::cerr << e.what() << std::endl;
    }
    return (0);
}