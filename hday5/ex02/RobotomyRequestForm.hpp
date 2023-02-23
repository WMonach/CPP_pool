/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:08:31 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/23 20:28:38 by will             ###   ########lyon.fr   */
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
	RobotomyRequestForm( RobotomyRequestForm const & rhs);
	~RobotomyRequestForm( void );
	const RobotomyRequestForm& operator=( RobotomyRequestForm const & rhs);
};

#endif