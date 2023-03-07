/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 19:30:24 by will              #+#    #+#             */
/*   Updated: 2023/03/07 23:04:56 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void    printSet(std::vector<int> const &input)
{
    std::copy(input.begin(), input.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl << std::endl;
}

int	main( void )
{
	srand(time(0));
	try
	{
		Span sp(3);

        sp.addNumber(16);
		sp.addNumber(6);

        std::cout << "Longest span  --> " << sp.longestSpan() << std::endl;
		std::cout << "Shortest span  --> " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
	}
	
	try
    {
        Span sp = Span(500);

		std::vector<unsigned int>::iterator begin;
		std::vector<unsigned int>::iterator end;
		
		begin = sp.getContainer().begin();
		end = sp.getContainer().end();
        sp.generate(begin, end);
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