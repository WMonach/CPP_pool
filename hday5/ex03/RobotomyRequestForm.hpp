/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:08:31 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/27 17:29:02 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTTOMYREQUESTFORM_H
# define ROBOTTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private :
	std::string	_Target;

	public :
	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( RobotomyRequestForm const & rhs);
	~RobotomyRequestForm( void );
	std::string	getTarget( void ) const;
	virtual void	execute( const Bureaucrat &employee) const;
	const RobotomyRequestForm& operator=( RobotomyRequestForm const & rhs);
};

#endif