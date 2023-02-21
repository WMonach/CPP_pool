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
	const Animal	*AnimalPack[NumberOfAnimals];
	int	i = 0;

	while (i < NumberOfAnimals / 2)
	{
		AnimalPack[i++] = new Dog();
	}
	while (i < NumberOfAnimals)
	{
		AnimalPack[i++] = new Cat();
	}
	(AnimalPack[NumberOfAnimals / 4])->setIdeas(10, "I'm alive?");
	std::cout << (AnimalPack[NumberOfAnimals / 4])->getIdea(10) << std::endl;
	while (i > 0)
	{
		delete AnimalPack[--i];
	}
	return 0;
}