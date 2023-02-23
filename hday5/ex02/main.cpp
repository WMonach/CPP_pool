/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:08:17 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/23 19:32:29 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    Form    Infos("GummyBearContrat", 40, 80);
    
    std::cout << Infos << std::endl;
    
    try {
        Bureaucrat lol("Jerome_Powell", 155);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "================" << std::endl;
    try {
        Form lol("GummyBearContrat", 155, 1);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "================" << std::endl;
	try {
		Bureaucrat In_Coke("Jerome_Powell", 20);
		In_Coke.promotion();
		In_Coke.promotion();
		In_Coke.promotion();
		In_Coke.retrograde();
        Form lol("GummyBearContrat", 40, 80);
        In_Coke.signForm(lol);
        In_Coke.signForm(lol);
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
        Form lol("GummyBearContrat", 40, 80);
        In_Coke.signForm(lol);
    }
    catch (std::exception& e)
    {
       std::cerr << e.what() << std::endl;
    }
    return (0);
}