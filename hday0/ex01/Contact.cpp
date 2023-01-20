/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:46:00 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/20 16:52:59 by wmonacho         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(void)
{
	this->_number_of_try_negative = 0;
	this->_number_of_try_no_contact = 0;
	this->_number_of_try_upper_8 = 0;
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
	if (first_name.size() == 0)
		set_first_name();
	this->_first_name = first_name;
}

void	Contact::set_last_name(void)
{
	std::string	last_name;

	std::cout << "enter the last name :";
	std::getline(std::cin, last_name);
	if (std::cin.eof())
		exit(1);
	if (last_name.size() == 0)
		set_last_name();
	this->_last_name = last_name;
}

void	Contact::set_nickname(void)
{
	std::string	nickname;

	std::cout << "enter the nickname :";
	std::getline(std::cin, nickname);
	if (std::cin.eof())
		exit(1);
	if (nickname.size() == 0)
		set_nickname();
	this->_nickname = nickname;
	
}

void	Contact::set_phone_number(void)
{
	std::string	phone_number;

	std::cout << "enter the phone number :";
	std::getline(std::cin, phone_number);
	if (std::cin.eof())
		exit(1);
	if (phone_number.size() == 0)
		set_phone_number();
	this->_phone_number = phone_number;

}

void	Contact::set_darkest_secret(void)
{
	std::string	darkest_secret;

	std::cout << "enter the darkest secret:";
	std::getline(std::cin, darkest_secret);
	if (std::cin.eof())
		exit(1);
	if (darkest_secret.size() == 0)
		set_darkest_secret();
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
	if (contact_index_string.size() == 1)
		contact_index = contact_index_string[0] - 48;
	else
	{
		std::cout <<contact_index_string << std::endl;
		contact_index = 10;
	}
	return (contact_index);
}

std::string	truncate_string(std::string string)
{
	std::string	new_string;

	if (string.size() > 10)
	{
		new_string = string.substr(0, 9);
		new_string.push_back('.');
		return (new_string);
	}
	return (string);
}

void	Contact::display(std::string string)
{
	std::cout << "|" << std::setw(10) << truncate_string(string);
	
}

void	Contact::display_contact(size_t index)
{
	std::cout << "| " << index << " ";
	display(this->_first_name);
	display(this->_last_name);
	display(this->_nickname);
	display(this->_phone_number);
	std::cout << "|" << std::endl;
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
}

void	Contact::check_contact_selection(size_t index, size_t check_contact_full, Contact *repertory)
{
	int	contact_index;

	contact_index = select_contact() - 1;
	if (contact_index < 0)
	{
		if (this->_number_of_try_negative == 0)
		{
			std::cout << "negative index, try again" << std::endl;
			this->_number_of_try_negative += 1;
			check_contact_selection(index, check_contact_full, repertory);
		}
		if (this->_number_of_try_negative > 0)
		{
			std::cout << "it's your " << this->_number_of_try_negative + 1 << "e try, pls it works, no need more test" << std::endl;
			this->_number_of_try_negative += 1;
			check_contact_selection(index, check_contact_full, repertory);
		}
	}
	if (contact_index > 8)
	{
		if (this->_number_of_try_upper_8 == 0)
		{
			this->_number_of_try_upper_8 += 1;
			std::cout << "upper than 8, try again" << std::endl;
			check_contact_selection(index, check_contact_full, repertory);
		}
		if (this->_number_of_try_upper_8 > 0)
		{
			std::cout << "it's your " << this->_number_of_try_upper_8 + 1 << "e try, pls it works, no need more test" << std::endl;
			this->_number_of_try_upper_8 += 1;
			check_contact_selection(index, check_contact_full, repertory);
		}
	}
	if (contact_index > index - 1 && check_contact_full == 0)
	{
		if (this->_number_of_try_no_contact == 0)
		{
			std::cout << "no contacts added to this index, try again" << std::endl;
			this->_number_of_try_no_contact += 1;
			check_contact_selection(index, check_contact_full, repertory);
		}
		if (this->_number_of_try_no_contact > 0)
		{
			std::cout << "it's your " << this->_number_of_try_no_contact + 1 << "e try, pls it works, no need more test" << std::endl;
			this->_number_of_try_no_contact += 1;
			check_contact_selection(index, check_contact_full, repertory);
		}
	}
	else
		repertory[contact_index].display_one_contact_with_details();
}

void	Contact::display_details(std::string infos, std::string string)
{
	std::cout << string << infos << std::endl;
}

void	Contact::display_one_contact_with_details(void)
{
	display_details(this->_first_name, "first name :");
	display_details(this->_last_name, "last name :");
	display_details(this->_nickname, "nickname :");
	display_details(this->_phone_number, "his phone number :");
	display_details(this->_darkest_secret, "his darkest secret :");
	this->_number_of_try_negative = 0;
	this->_number_of_try_no_contact = 0;
	this->_number_of_try_upper_8 = 0;
}
