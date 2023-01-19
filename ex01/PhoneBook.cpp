/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:37:21 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/19 17:15:32 by wmonacho         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void )
{
	this->_index = 0;
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
	this->_index += 1;
}

void	PhoneBook::set_index(void)
{
	if (this->_index >= 8)
		this->_index = 0;
}

int	PhoneBook::get_index(void)
{
	return (this->_index);
}

void	PhoneBook::ft_display_contact(Contact perso)
{
	int	contact_index;

	contact_index = perso.select_contact();
	if (contact_index < 0)
		return ;
	this->_repertory[contact_index].display_contact();
}

//faire des fonctions utils