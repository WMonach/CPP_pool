/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:08:20 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/02 10:38:58 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm( void ): Form("RobotomyRequestForm", 72, 45), _Target("")
{
	srand(time(0));
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ): Form("RobotomyRequestForm", 72, 45), _Target(target)
{
	srand(time(0));
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & rhs ): Form("RobotomyRequestForm", 72, 45), _Target(rhs.getTarget())
{
	*this = rhs;
}

std::string	RobotomyRequestForm::getTarget( void ) const
{
	return ( this->_Target);
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	
}

const RobotomyRequestForm&	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	this->_Target = rhs._Target;
	this->_Signature = rhs._Signature;
	return (*this);
}

void	RobotomyRequestForm::execute( const Bureaucrat &employee) const
{
	if (employee.getGrade() > this->getExecutionGrade())
		throw(Form::GradeTooLowException());
	if (this->getSignature() == 0)
		throw(Form::NotSigned());
	std::cout << " Drilling noise " << std::endl;
	std::cout << "        ____					" << std::endl;
	std::cout << " _    +(____)+					" << std::endl;
	std::cout << "| |   |      |     __			" << std::endl;
	std::cout << "| ====+      +====(__)----		" << std::endl;
	std::cout << "|_|   							" << std::endl;
	int	random = rand();
	if ( random % 2 == 0)
	{
		std::cout << " .d8888b 888  888 .d8888b .d8888b .d88b. .d8888b .d8888b  " << std::endl;
		std::cout << " 88K     888  888d88P    d88P    d8P  Y8b88K     88K      " << std::endl;
		std::cout << " Y8888b. 888  888888     888     88888888 Y8888b. Y8888b. " << std::endl;
	 	std::cout << " X88Y88b 888  Y88b88     Y88b.   Y8b.        X88     X88 " << std::endl;
		std::cout << "  88888P' Y88888  Y8888P  Y8888P  Y8888  88888P' 88888P' " << std::endl;
		std::cout << this->_Target << " have been Robotized" << std::endl;
	}
	else
	{
		std::cout << " Failure ! " << this->_Target << "can't be robotized !" << std::endl;
	}
}