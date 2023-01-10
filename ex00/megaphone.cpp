/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:17:55 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/10 14:34:25 by wmonacho         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

int	ft_strlen(int j, char *str)
{
	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}

int	main(int argc, char **argv)
{
	int	i = 1;
	int	j = 0;
	int	len = 0;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < argc)
	{
		len = ft_strlen(0, argv[i]);
		j = 0;
		while (j < len)
		{
			if (argv[i][j] >= 97 && argv[i][j] <= 122)
			{
				argv[i][j] -= 32;
				std::cout << argv[i][j];
			}
			else
			{
				std::cout << argv[i][j];
			}
			j++;
		}
		std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return (0);
}