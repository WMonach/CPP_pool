/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:12:11 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/16 16:46:08 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	// Animal	Wow;
	const Animal	*AnimalPack[NumberOfAnimals];
	int	i = 0;

	// Wow.setType("Animal");
	while (i < NumberOfAnimals / 2)
	{
		AnimalPack[i++] = new Dog();
	}
	while (i < NumberOfAnimals)
	{
		AnimalPack[i++] = new Cat();
	}

	while (i > 0)
	{
		delete AnimalPack[--i];
	}
	std::cout << "================================================" << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
	std::cout << "================================================" << std::endl;
	std::cout << "================================================" << std::endl;
	return 0;
	return 0;
}