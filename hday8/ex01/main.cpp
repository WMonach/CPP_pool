/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 19:30:24 by will              #+#    #+#             */
/*   Updated: 2023/03/08 14:17:02 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void    printSet(std::vector<unsigned int> const &input)
{
    std::copy(input.begin(), input.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl << std::endl;
}

int	main( void )
{
	srand(time(0));
	try
	{
		Span sp(6);

        sp.addNumber(16);
		sp.addNumber(6);
		sp.addNumber(134);
		sp.addNumber(45);
		sp.addNumber(14);
		sp.addNumber(57);

		sp.sortContainer();
		printSet(sp.getContainer());
        std::cout << "Longest span  --> " << sp.longestSpan() << std::endl;
		std::cout << "Shortest span  --> " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
	}
	std::cout << "==================================================================" << std::endl;
	try
	{
		Span sp(1);

        sp.addNumber(16);
		sp.addNumber(6);

        std::cout << "Longest span  --> " << sp.longestSpan() << std::endl;
		std::cout << "Shortest span  --> " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
	}
	std::cout << "==================================================================" << std::endl;
	try
    {
        Span sp = Span(100);

		std::vector<unsigned int> Array(100);
		
		for  ( std::vector<unsigned int>::iterator it = Array.begin(); it != Array.end(); ++it)
		{
    	    *it = rand()% 100;
		}
		std::cout << Array.size() << "==vector size, Span size max == 100" << std::endl;
		sp.populate(Array.begin(), Array.end());
		sp.sortContainer();
		printSet(sp.getContainer());
		std::cout << "Longest span  --> " << sp.longestSpan() << std::endl;
		std::cout << "Shortest span  --> " << sp.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
	std::cout << "==================================================================" << std::endl;
	try
    {
        Span sp = Span(100);

		std::vector<unsigned int> Array(99);
		
		for  ( std::vector<unsigned int>::iterator it = Array.begin(); it != Array.end(); ++it)
		{
    	    *it = rand()% 100;
		}
		std::cout << Array.size() << "==vector size, Span size max == 100" << std::endl;
		sp.populate(Array.begin(), Array.end());
		sp.sortContainer();
		printSet(sp.getContainer());
		std::cout << "Longest span  --> " << sp.longestSpan() << std::endl;
		std::cout << "Shortest span  --> " << sp.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
	std::cout << "==================================================================" << std::endl;
	try
    {
        Span sp = Span(99);

		std::vector<unsigned int> Array(100);
		
		for  ( std::vector<unsigned int>::iterator it = Array.begin(); it != Array.end(); ++it)
		{
    	    *it = rand()% 100;
		}
		std::cout << Array.size() << "==vector size, Span size max == 99" << std::endl;
		sp.populate(Array.begin(), Array.end());
		sp.sortContainer();
		printSet(sp.getContainer());
		std::cout << "Longest span  --> " << sp.longestSpan() << std::endl;
		std::cout << "Shortest span  --> " << sp.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
	return (0);
}