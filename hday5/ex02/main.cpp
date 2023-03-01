/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:08:17 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/01 19:17:59 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>

int main(void)
{
	Bureaucrat InCoke("Jerome_Powell", 5);
	Bureaucrat NoTime("GeorgeDeLaCompta", 35);
	Bureaucrat NeedToSleep("Intern", 120);
	Bureaucrat DoNothing("Trash", 150);

	try {
		RobotomyRequestForm form("TimeForThePlanet");
		InCoke.promotion();
		InCoke.retrograde();
		NeedToSleep.signForm(form);
		NoTime.executeForm(form);
		NoTime.signForm(form);
		NoTime.executeForm(form);
		NoTime.executeForm(form);
		NoTime.executeForm(form);
		NoTime.executeForm(form);
		NoTime.executeForm(form);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try {
		ShrubberyCreationForm form("TimeForThePlanet");
		InCoke.promotion();
		InCoke.retrograde();
		InCoke.signForm(form);
		NoTime.executeForm(form);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try {
		PresidentialPardonForm form("TimeForThePlanet");
		InCoke.promotion();
		InCoke.retrograde();
		NoTime.signForm(form);
		InCoke.executeForm(form);
		InCoke.signForm(form);
		InCoke.executeForm(form);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "================" << std::endl;
    return (0);
}