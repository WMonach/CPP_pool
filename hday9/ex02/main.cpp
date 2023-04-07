/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 14:41:52 by wmonacho          #+#    #+#             */
/*   Updated: 2023/04/07 19:16:07 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	checkDigit(int ac, char **av)
{
	int	i = 1;
	size_t	j;

	
	while (i < ac)
	{
		j = 0;
		while (j < std::strlen(av[i]))
		{
			if (std::isdigit(static_cast<int>(av[i][j])) == 1)
				j++;
			else
				throw (std::exception());
		}
		i++;
	}	
}

void	checkRepetition(int ac, char **av)
{
	size_t	i = 1;
	size_t	j;
	size_t	len;

	
	while (i < static_cast<size_t>(ac))
	{
		j = i;
		while (j++ < static_cast<size_t>(ac) - 1)
		{
			if (i == j)
				continue;
			if (strlen(av[i]) > strlen(av[j]))
				len = strlen(av[i]);
			else
				len = strlen(av[j]);
			if (std::strncmp(av[i], av[j], len) != 0)
				continue;
			else
				throw (std::exception());
		}
		i++;
	}	
}

void	parsing( int ac, char **av)
{
	checkDigit(ac, av);
	checkRepetition(ac, av);
}

void	sortPrint( int ac, char **av )
{
	PmergeMe	instance;
	int	i = 0;
	
	while (i < ac)
	{
		instance.set(std::atoi(av[i]));
		i++;
	}
}

int	main(int argc, char **argv)
{

	if (argc > 0)
	{
		try
		{
			parsing(argc,argv);
			sortPrint(argc, argv);
		}
		catch (const std::exception& e) 
		{
       		std::cerr << e.what() << std::endl;
		}
	}
	else
	{
		std::cout << "Error : must have at list two arguments" << std::endl;
	}
	return (0);
}