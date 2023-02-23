/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:08:01 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/23 20:28:31 by will             ###   ########lyon.fr   */
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
	PresidentialPardonForm( PresidentialPardonForm const & rhs);
	~PresidentialPardonForm( void );
	const PresidentialPardonForm& operator=( PresidentialPardonForm const & rhs);
};

#endif