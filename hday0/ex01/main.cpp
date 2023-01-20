/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:28:09 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/20 15:56:08 by wmonacho         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	Contact		perso;
	std::string order;

	phonebook.welcome_message();
	while(true)
	{
		std::getline(std::cin, order);
		if (std::cin.eof())
			exit(1);
		if (order == "ADD")
		{
			phonebook.ft_setcontact();
		}
		if (order == "SEARCH")
		{
			phonebook.ft_display_contact(perso);
		}
		if (order == "EXIT")
			return (0);
	}
}