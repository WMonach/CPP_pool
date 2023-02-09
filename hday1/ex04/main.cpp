/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:23:23 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/30 17:24:14 by wmonacho         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	find_and_replace(std::string file_name, std::string to_find, std::string to_replace)
{
	std::string		str;
	std::string		outfile_name= file_name + ".replace";
	std::ifstream	input_file(file_name);
	std::ofstream	output_file(outfile_name);
	size_t			index = 0;

	if (to_find.length() == 0 && to_replace.length() == 0)
	{
		std::cout << "nothing to replace and nothing to erase" << std::endl;
		return (0);
	}
	if (!input_file.is_open())
	{
		std::cout << "can't open  input file" << std::endl;
		return (0);
	}
	if (!output_file.is_open())
	{
		std::cout << "can't open  output file" << std::endl;
		return (0);
	}
	while (std::getline(input_file, str))
	{
		index = str.find(to_find, index);
		if (index != std::string::npos)
		{
			str.erase(index, to_find.length());
			str.insert(index, to_replace);
		}
		output_file << str;
		if (!input_file.eof())
			output_file << std::endl;
	}
	
	input_file.close();
	output_file.close();
	return (1);
}

int	main(int	argc, char **argv)
{
	if (argc == 4)
	{
		if (!find_and_replace(argv[1], argv[2], argv[3]))
			return (1);
	}
	else
	{
		std::cout << "wrong number of argument" << std::endl;
		return (1);
	}
	return (0);
	
}