/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:08:01 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/02 10:37:02 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"
#include "Bureaucrat.hpp"

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