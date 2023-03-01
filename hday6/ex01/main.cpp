/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:40:17 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/01 19:31:36 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <stdint.h>

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data	*data;
	Data	test;
	uintptr_t	raw;
	
	test.zuzu = "beautiful";
	data = &test;
	raw = serialize(data);
	data = deserialize(raw);
	std::cout << data->zuzu << std::endl;
}