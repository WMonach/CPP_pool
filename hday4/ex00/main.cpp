/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:12:11 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/16 17:10:19 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();

	std::cout << j->getType() << "Dog" << std::endl;
	std::cout << i->getType() << "Cat" << std::endl;
	std::cout << k->getType() << "WrongCat" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	k->makeSound();
	meta->makeSound();
	delete k;
	delete i;
	delete j;
	delete meta;
	return 0;
}