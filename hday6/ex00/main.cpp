/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:02:18 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/01 17:46:13 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <climits>

bool	check_isnan_isinf(double value) 
{
	if (std::isnan(value) == true || std::isinf(value) == true)
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: " << static_cast<float>(value) << "f" << std::endl;
		std::cout << "Double: "  << value << std::endl;
		return true;
	}
	return false;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char	*end;
		std::string	tmp = argv[1];
		int	TmpLength = tmp.length();
		
		long int	i = std::strtol(argv[1], &end, 10);
		if ((i > 2147483647  || i < -2147483648) && (*end == 0))
		{
			std::cout << "Value is out of INT range" << std::endl;
			return (0);
		}
		if (*end == 0)
		{
			std::cout << "==> Integer : " << i << std::endl;
			if (i > 32 && i <= 126)
				std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
			else
				std::cout << "char: non displayable" << std::endl; 
			std::cout << "int: " << i << std::endl;
			std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(i) << std::endl;
			return 0;
		}
		
		float	f = std::strtof(argv[1], &end);
		if (f > HUGE_VAL)
		{
			std::cout << "granf float " << HUGE_VAL << "   " << f << std::endl;
			return 0;
		}
		int length = end - argv[1];
		if ((length == TmpLength- 1) && *end == 'f' && *(end + 1) == '\0')
		{
			if (check_isnan_isinf(f) == true)
				return (1);
			std::cout << "==> Float : " << f << std::endl;
			if (f > 32 && f <= 126)
				std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
			else
				std::cout << "char: non displayable" << std::endl; 
			std::cout << "int: " << static_cast<int>(f) << std::endl;
			std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(f) << std::endl;
			return (0);
		}
		
		double d = std::strtod(argv[1], &end);
		if (d >= HUGE_VAL)
		{
			std::cout << "big double" << std::endl;
			return 0;
		}
		if (*end == 0)
		{
			if (check_isnan_isinf(d) == true)
				return (1);
			std::cout << "==> Double : " << d << std::endl;
			if (d > 32 && d <= 126)
				std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
			else
				std::cout << "char: non displayable" << std::endl;
			std::cout << "int: " << static_cast<int>(d) << std::endl;
			std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
			std::cout << "double: " << d << std::endl;
			return (0);
		}
		
		if (argv[1][0] && !argv[1][1])
		{
			std::cout << "==> Char : " << argv[1] << std::endl;
			std::cout << "Char: '" << argv[1][0] << "'" << std::endl;
			std::cout << "Int: " << static_cast<int>(argv[1][0]) << std::endl;
			std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(argv[1][0]) << "f" << std::endl;
			std::cout << "Double: " << static_cast<double>(argv[1][0]) << std::endl;
			return (0);
		}
	}
	std::cout << "Wrong number of argument, you must give one argument !" << std::endl;
	return (1);
}
