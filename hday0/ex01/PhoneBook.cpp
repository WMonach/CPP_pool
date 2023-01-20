/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:37:21 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/20 16:40:12 by wmonacho         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void )
{
	this->_index = 0;
	this->_repertory_full_check = 0;
}

PhoneBook::~PhoneBook( void )
{
}

void PhoneBook::welcome_message(void)
{
	std::cout	<< "Welcome beautiful corrector on"  << std::endl
				<< "============================================" << std::endl
				<< "==             BEAUTÉ FATALE              ==" << std::endl
				<< "============================================" << std::endl
				<< "use me as you like we'll see what happens" << std::endl
				<< "To help you, use ADD to add a new contact" << std::endl
				<< "use SEARCH to display the requested contact" << std::endl
				<< "use EXIT to exit the program" << std::endl;
	return;
}

void	PhoneBook::set_contact(Contact *contact)
{
	contact->set_first_name();
	contact->set_last_name();
	contact->set_nickname();
	contact->set_phone_number();
	contact->set_darkest_secret();
}

void	PhoneBook::ft_setcontact(void)
{
	set_index();
	set_contact(&(this->_repertory[this->_index]));
	if (this->_index < 8)
		this->_index += 1;
}

void	PhoneBook::set_index(void)
{
	if (this->_index >= 8)
	{
		this->_index = 0;
		this->_repertory_full_check = 1;
	}
}

size_t	PhoneBook::get_index(void)
{
	return (this->_index);
}

size_t	PhoneBook::get_check(void)
{
	return (this->_repertory_full_check);
}

void	PhoneBook::ft_display_contact(Contact perso)
{
	PhoneBook data;
	size_t	i = 0;
	if (this->_index == 0)
	{
		std::cout << "no contacts added, sorry" << std::endl;
		return ;
	}
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	while ((i <= this->_index - 1 && this->_repertory_full_check == 0) || (i <= 8 && this->_repertory_full_check == 1))
	{
		this->_repertory[i].display_contact(i + 1);
		i++;
	}
	perso.check_contact_selection(this->_index, this->_repertory_full_check, this->_repertory);
}
