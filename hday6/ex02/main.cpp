/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:03:34 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/02 17:02:46 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <cstdlib>

Base * generate(void)
{
	int	chance;
	
	chance = rand() % 3;
	switch (chance)
	{
		case 0:
			std::cout << "generate an object A" << std::endl;
			return (new A());
		case 1:
			std::cout << "generate an object B" << std::endl;
			return (new B());
		default :
			std::cout << "generate an object C" << std::endl;
			return (new C());
	}
	return (NULL);
}

void identify(Base* p)
{
	A* a = dynamic_cast<A*>(p);
	B* b = dynamic_cast<B*>(p);
	C* c = dynamic_cast<C*>(p);

	if (a)
		std::cout << "the real type is A" << std::endl;
	else if(b)
		std::cout << "the real type is B" << std::endl;
	else if(c)
		std::cout << "the real type is C" << std::endl;
	else
		std::cout << "the real type is nothing" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "the real ref type is A" << std::endl;
		return ;
	}
	catch (const std::exception &e){}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "the real ref type is B:" << std::endl;
		return ;
	}
	catch (const std::exception  &e){}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "the real ref type is C:" << std::endl;
		return ;
	}
	catch (const std::exception  &e){}
}

int	main( void )
{
	Base	*base;

	srand(time(0));
	base = generate();
	if (!base)
	{
		std::cout << "base failed to generate A,B,C" << std::endl;
		return (1);
	}
	identify(base);
	identify(*base);
	delete base;
	return (0);
}