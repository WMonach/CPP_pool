/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:08:17 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/01 19:20:34 by wmonacho         ###   ########.fr       */
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

	try {
		InCoke.promotion();
		InCoke.retrograde();
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