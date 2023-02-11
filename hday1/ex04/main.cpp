/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:23:23 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/31 18:21:47 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	looser(std::string file, std::string string_to_delete, std::string string_to_replace)
{
	std::ifstream	ifstr(file);
	std::string		str;

	if (!ifstr.is_open())
		return (-1);
	while (std::getline(ifstr, str))
	{
		if (str.strstr())
	}
}

int	main(int	argc, char **argv)
{
	if (argc == 4)
		looser(argv[1], argv[2], argv[3]);
	else
		return (1);
	return (0);
	
}