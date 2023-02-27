/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:08:06 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/27 17:59:49 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ): Form("PresidentialPardonForm", 25, 5), _Target("")
{

}

PresidentialPardonForm( std::string target ): Form("PresidentialPardonForm", 25, 5), _Target(target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & rhs ): Form("PresidentialPardonForm", 25, 5), _Target(rhs.getTarget())
{
	
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	
}

const PresidentialPardonForm&	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	
}

void	execute( const Bureaucrat &Boss) const
{

}

std::string	getTarget( void ) const
{
	return (this->_Target);
}