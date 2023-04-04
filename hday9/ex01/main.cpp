/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:54:34 by wmonacho          #+#    #+#             */
/*   Updated: 2023/04/04 16:05:54 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	switch (argc)
	{		
		case 2 :
			try
			{
				
				break;
			}
			catch (const std::exception& e) {
       			std::cerr << e.what() << std::endl;
			}
		default :
			std::cerr << "Wrong format" << std::endl;
			return (1);
	}
	return (0);
}