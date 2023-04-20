/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 14:41:52 by wmonacho          #+#    #+#             */
/*   Updated: 2023/04/14 12:36:02 by will             ###   ########lyon.fr   */
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
	float	vector_time;
	float	deque_time;
	
	
	std::cout << "First Container Before : ";
	for (int u = 0 ; u < ac; u++)
		std::cout << av[u] << " ";
	std::cout << std::endl;
    gettimeofday(&startVec, NULL);
	inst.sortVector(inst.getVector());
	gettimeofday(&endVec, NULL);
	std::cout << "Second Container Before : ";
	for (int u = 0 ; u < ac; u++)
		std::cout << av[u] << " ";
	std::cout << std::endl;
	vector_time = (endVec.tv_sec - startVec.tv_sec) + (endVec.tv_usec - startVec.tv_usec);
	gettimeofday(&startVec, NULL);
	inst.sortDeque(inst.getDeque());
	gettimeofday(&endVec, NULL);
	deque_time = (endVec.tv_sec - startVec.tv_sec) + (endVec.tv_usec - startVec.tv_usec);
	std::cout << "Time for the first container : " << vector_time << " microseconds" << std::endl;
	std::cout << "Time for the second container : " << deque_time << " microseconds" << std::endl;
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
	print(instance, ac, av);
}

int	main(int argc, char **argv)
{
	argv = &argv[1];
	if (argc > 1)
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