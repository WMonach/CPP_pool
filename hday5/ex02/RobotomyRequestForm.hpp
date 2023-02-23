/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:08:31 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/23 19:27:25 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTTOMYREQUESTFORM_H
# define ROBOTTOMYREQUESTFORM_H

class Form;

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