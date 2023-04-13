/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 14:41:52 by wmonacho          #+#    #+#             */
/*   Updated: 2023/04/13 16:47:38 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	checkDigit(int ac, char **av)
{
	int	i = 0;
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
	size_t	i = 0;
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

void	print(PmergeMe &inst, int ac, char **av)
{
	std::vector<int> tmp_vector(inst.getVector());
    std::deque<int> tmp_deque(inst.getDeque());
	
	struct timeval startVec, endVec;
    gettimeofday(&startVec, NULL);
	
	
	inst.sortVector(inst.getVector());
	std::cout << "Second Container Before : ";
	for (int u = 1 ; u < ac; u++)
		std::cout << av[u] << " ";
	std::cout << std::endl;
	gettimeofday(&endVec, NULL);
	std::cout << "Time for the first container : " << (endVec.tv_sec - startVec.tv_sec) + (endVec.tv_usec - startVec.tv_usec) << " microseconds" << std::endl;
	inst.sortDeque(inst.getDeque());	
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
	std::cout << "First Container Before : ";
	for (int u = 0 ; u < ac; u++)
		std::cout << av[u] << " ";
	std::cout << std::endl;
	print(instance, ac, av);
}

int	main(int argc, char **argv)
{
	argv = &argv[1];
	if (argc > 0)
	{
		try
		{
			parsing(argc - 1,argv);
			sortPrint(argc - 1, argv);
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