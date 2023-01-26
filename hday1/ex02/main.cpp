/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:04:21 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/26 15:53:20 by wmonacho         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string sentence = "HI THIS IS BRAIN";
	std::string *stringPTR = &sentence;
	std::string &stringREF = sentence;
	
	std::cout << "The memory address of the string variable : " << &sentence << std::endl
	<< "The memory address held by stringPTR : " << stringPTR << std::endl
	<< "The memory address held by stringREF : " << &stringREF << std::endl;
	
	std::cout << "The value of the string variable : " << sentence << std::endl
	<< "The value pointed to by stringPTR : " << *stringPTR << std::endl
	<< "The value pointed to by stringREF : " << stringREF << std::endl;
	return (0);
}