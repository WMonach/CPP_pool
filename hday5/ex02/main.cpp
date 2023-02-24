/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:08:17 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/24 16:49:20 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"

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
	try {
		Bureaucrat In_Coke("Jerome_Powell", 20);
		In_Coke.promotion();
		In_Coke.promotion();
		In_Coke.promotion();
		In_Coke.retrograde();
        const Form  *Planet;
        ShrubberyCreationForm lol("TimeForThePlanet");
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