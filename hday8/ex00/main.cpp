/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:20:40 by will              #+#    #+#             */
/*   Updated: 2023/03/03 21:53:49 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

// int	main(void)
// {
// 	std::vector<int>  myCont;
	
// 	myCont.push_back(2);
// 	myCont.push_back(5);
//     myCont.push_back(42);
//     myCont.push_back(6);
//     myCont.push_back(78);
//     myCont.push_back(23);
	
// 	std::vector<int>::const_iterator result = easyfind(myCont, 23);
//     if (result != myCont.end())
//         std::cout << "Value found : " << *result << std::endl;
//     else
//         std::cout << "Value not found : " << *result << std::endl;

//     return 0;
// }

// template<typename T>
// void	displayIterator( T it, T end )
// {
// 	if (it != end)
// 		std::cout << "iterator: " << *it << std::endl;
// 	else
// 		std::cout << "iterator reached the end of container" << std::endl;
// }

// int	main( void )
// {
// 	std::vector<int>			vect;
// 	std::vector<int>::iterator	it;

// 	for (int i = 1; i < 59; i += 2)
// 		vect.push_back(i);
// 	it = easyfind(vect, 43);
// 	displayIterator(it, vect.end());
// 	it = easyfind(vect, 42);
// 	displayIterator(it, vect.end());
// }

void    printVector(std::vector<int> const &input)
{
    std::copy(input.begin(), input.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl << std::endl;
}

int main(void)
{
    std::vector<int>    v1;

    srand(time(0));
    for (size_t i = 0; i < 100; i++)
    {
        int res = rand()% 100 +1;
        v1.push_back(res);
    }
    printVector(v1);
    int needle = rand()% 100 +1;
    std::cout << "Number to find: " << needle << std::endl;
    try
    {
        easyfind<std::vector<int> >(v1, needle);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}