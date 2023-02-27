/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:08:17 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/27 17:21:39 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    // try {
    //     Bureaucrat lol("Jerome_Powell", 155);
    // }
    // catch (std::exception& e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    std::cout << "================" << std::endl;
    std::cout << "================" << std::endl;
	Form	*form = NULL;
	try {
		Bureaucrat In_Coke("Jerome_Powell", 20);
		In_Coke.promotion();
		In_Coke.promotion();
		In_Coke.promotion();
		In_Coke.retrograde();
        form = new RobotomyRequestForm("TimeForThePlanet");
		form->execute(In_Coke);
        // In_Coke.signForm(lol);
        // In_Coke.signForm(lol);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "================" << std::endl;
    try {
        Bureaucrat In_Coke("Jerome_Powell", 140);
	    In_Coke.promotion();
	    In_Coke.promotion();
	    In_Coke.promotion();
	    In_Coke.retrograde();
        // Form lol("TimeForThePlanet");
        // In_Coke.signForm(lol);
    }
    catch (std::exception& e)
    {
       std::cerr << e.what() << std::endl;
    }
    return (0);
}