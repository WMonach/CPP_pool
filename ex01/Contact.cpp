/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:46:00 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/19 17:43:49 by wmonacho         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact( void )
{
}

void	Contact::set_first_name(void)
{
	std::string	first_name;

	std::cout << "enter the first name :";
	std::getline(std::cin, first_name);
	if (std::cin.eof())
		exit(1);
	this->_first_name = first_name;
}

void	Contact::set_last_name(void)
{
	std::string	last_name;

	std::cout << "enter the last name :";
	std::getline(std::cin, last_name);
	if (std::cin.eof())
		exit(1);
	this->_last_name = last_name;
}

void	Contact::set_nickname(void)
{
	std::string	nickname;

	std::cout << "enter the nickname :";
	std::getline(std::cin, nickname);
	if (std::cin.eof())
		exit(1);
	this->_nickname = nickname;
	
}

void	Contact::set_phone_number(void)
{
	std::string	phone_number;

	std::cout << "enter the phone number :";
	std::getline(std::cin, phone_number);
	if (std::cin.eof())
		exit(1);
	this->_phone_number = phone_number;

}

void	Contact::set_darkest_secret(void)
{
	std::string	darkest_secret;

	std::cout << "enter the darkest secret:";
	std::getline(std::cin, darkest_secret);
	if (std::cin.eof())
		exit(1);
	this->_darkest_secret = darkest_secret;
}

int	Contact::check_contact_index(std::string contact_index_string)
{
	if (contact_index_string.size() == 1)
	{
		if (contact_index_string[0] >= 48 && contact_index_string[0] <= 56)
			return (1);
	}
	return (0);
}

int	Contact::select_contact(void)
{
	std::string	contact_index_string;
	int			contact_index;

	std::cout << "Which contact do you want to display? :";
	std::getline(std::cin, contact_index_string);
	if (std::cin.eof())
		exit(1);
	if (!check_contact_index(contact_index_string))
		return (-1);
	contact_index = contact_index_string[0] - 48;
	std::cout << contact_index << std::endl;
	return (contact_index);
}

std::string	truncate_string(std::string string)
{
	std::string	new_string;

	if (string.size() > 10)
	{
		new_string = string.substr(0, 8);
		new_string[9] = '.';
		return (new_string);
	}
	return (string);
}

void	Contact::display_contact(void)
{
	std::cout << std::setw(10) << truncate_string(this->_first_name)
	<< "|"
	<< std::setw(10) << truncate_string(this->_last_name)
	<< "|"
	<< std::setw(10) << truncate_string(this->_nickname)
	<< "|"
	<< std::setw(10) << truncate_string(this->_phone_number)
	<< "|" << std::endl;
}

// checker les entrées vide des contacts enregistrés
// faire gaffe a index + 1
// message d'erreur quand aux demandes de l'utilisateur
// tester