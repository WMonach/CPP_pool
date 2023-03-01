/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:08:56 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/01 17:52:06 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _Name("Jerome_Powell")
{
	std::cout << "Bureaucrat is created" << std::endl;
    this->_Grade = 1;
}

Bureaucrat::Bureaucrat( std::string name, int grade ): _Name(name)
{
	std::cout << "Bureaucrat is created" << std::endl;
    if (grade < 1)
        throw(GradeTooHighException());
    if (grade > 150)
         throw(GradeTooLowException());
    this->_Grade = grade;
}

Bureaucrat::Bureaucrat( Bureaucrat const & rhs): _Name(rhs._Name)
{
    std::cout << "Bureaucrat is created" << std::endl;
	*this = rhs;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat destroyed" << std::endl;
}

const Bureaucrat&	Bureaucrat::operator=( Bureaucrat const & rhs)
{
    std::cerr << "can't copy Name" << std::endl;
    this->_Grade = rhs._Grade;
	return (*this);
}

const std::string& Bureaucrat::getName( void ) const
{
    return(this->_Name);
}

unsigned int Bureaucrat::getGrade( void ) const
{
    return(this->_Grade);
}

std::ostream	&operator<<( std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}

void	Bureaucrat::promotion( void )
{
	if (this->_Grade < 2)
        throw(GradeTooHighException());
	this->_Grade = this->_Grade - 1;
}

void	Bureaucrat::retrograde( void )
{
	if (this->_Grade > 149)
        throw(GradeTooLowException());
	this->_Grade = this->_Grade + 1;
}