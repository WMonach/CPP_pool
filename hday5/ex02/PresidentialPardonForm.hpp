/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:08:01 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/27 17:57:24 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private :
	std::string	_Target;
	
	public :
	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string target );
	PresidentialPardonForm( PresidentialPardonForm const & rhs);
	~PresidentialPardonForm( void );
	void	execute( const Bureaucrat &Boss) const;
	std::string	getTarget( void ) const;
	const PresidentialPardonForm& operator=( PresidentialPardonForm const & rhs);
};

#endif