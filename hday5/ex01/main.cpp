/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:08:17 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/22 22:30:04 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try {
        Bureaucrat lol("Jerome_Powell", 155);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try {
		Bureaucrat In_Coke("Jerome_Powell", 20);
		In_Coke.promotion();
		In_Coke.promotion();
		In_Coke.promotion();
		In_Coke.retrograde();
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try {
		Bureaucrat In_Coke("Jerome_Powell", 2);
		In_Coke.promotion();
		In_Coke.promotion();
		In_Coke.promotion();
		In_Coke.retrograde();
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try {
		Bureaucrat In_Coke("Jerome_Powell", 148);
		In_Coke.promotion();
		In_Coke.retrograde();
		In_Coke.retrograde();
		In_Coke.retrograde();
		In_Coke.retrograde();
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}