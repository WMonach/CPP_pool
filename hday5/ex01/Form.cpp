/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:41:39 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/02 10:09:53 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( void ): _Name("GummyBearContrat"), _GradeToSign(40), _ExecutionGrade(80)
{
	this->_Signature = 0;
}

Form::Form( std::string name, int gradeToSign,  int gradeToExecute ): _Name(name), _GradeToSign(gradeToSign), _ExecutionGrade(gradeToExecute)
{
	if (gradeToSign < 1)
	    throw(GradeTooHighException());
	if (gradeToSign > 150)
	    throw(GradeTooLowException());
	if (gradeToExecute < 1)
	    throw(GradeTooHighException());
	if (gradeToExecute > 150)
	    throw(GradeTooLowException());
	this->_Signature = 0;
} 

Form::Form( Form const & rhs): _Name("GummyBearContrat"), _GradeToSign(40), _ExecutionGrade(80)
{
	*this = rhs;
}

const Form&	Form::operator=( Form const & rhs)
{
	std::cerr << "Can't copy Name" << std::endl;
	this->_Signature = rhs._Signature;
	return (*this);
}

void	Form::beSigned( const Bureaucrat &Employee)
{
	if (Employee.getGrade() >= this->getGradeToSign())
		throw(Form::GradeTooLowException());
	if (this->_Signature == 1)
		throw(Form::AlreadySigned());
	this->_Signature = 1;
}

bool	Form::getSignature( void ) const
{
	return (this->_Signature);
}

const std::string	Form::getName( void ) const
{
	return (this->_Name);
}

int	Form::getGradeToSign( void ) const
{
	return (this->_GradeToSign);
}

int	Form::getExecutionGrade( void ) const
{
	return (this->_ExecutionGrade);
}

std::ostream	&operator<<( std::ostream & o, Form const & rhs)
{
	o << rhs.getName() << " Form have to be signed by an employee with a grade higher than "
		<< rhs.getGradeToSign() << " and be execute by an employye with a grade higher than "
		<< rhs.getExecutionGrade() << " the form is " << ((rhs.getSignature()) ? "signed" : "not signed") << std::endl;
	return (o);
}

Form::~Form( void )
{
}