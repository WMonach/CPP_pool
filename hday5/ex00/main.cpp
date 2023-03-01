/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:08:17 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/01 17:53:58 by wmonacho         ###   ########.fr       */
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
        std::cout << In_Coke << std::endl;
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