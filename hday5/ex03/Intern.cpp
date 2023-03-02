/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:59:59 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/02 10:21:53 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern( void )
{
	std::cout << "Intern born" << std::endl;
	this->_NameForm[0] = "PresidentialPardonForm";
	this->_NameForm[1] = "RobotomyRequestForm";
	this->_NameForm[2] = "ShrubberyCreationForm";
}

Intern::Intern( Intern const & rhs)
{
	std::cout << "Intern born" << std::endl;
	*this = rhs;
}

const Intern& Intern::operator=( Intern const & obj)
{
	this->_NameForm[0] = obj._NameForm[0];
	this->_NameForm[1] = obj._NameForm[1];
	this->_NameForm[2] = obj._NameForm[2];
	return (*this);
}

Intern::~Intern( void )
{
	std::cout << "Intern die" << std::endl;
}

Form* Intern::makeForm( std::string FormName, std::string Target)
{
	int i = -1;
	Form	*NewForm = NULL;
	int CheckForm = -1;
	while (++i < 3)
	{
		if (this->_NameForm[i] == FormName)
			CheckForm = i;
	}
	switch (CheckForm)
	{
		case -1:
			std::cout << "Intern can't create an imaginary Form" << std::endl;
			break;
		case 0:
			std::cout << "Intern creates " << FormName << std::endl;
			NewForm = new PresidentialPardonForm(Target);
			break;
		case 1:
			std::cout << "Intern creates " << FormName << std::endl;
			NewForm = new RobotomyRequestForm(Target);
			break;
		case 2:
			std::cout << "Intern creates " << FormName << std::endl;
			NewForm = new ShrubberyCreationForm(Target);
			break;
	}
	return NewForm;
}