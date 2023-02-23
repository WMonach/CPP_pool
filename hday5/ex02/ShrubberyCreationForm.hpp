/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:08:56 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/23 20:28:42 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private :
	std::string	_Target;

	public :
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( ShrubberyCreationForm const & rhs);
	~ShrubberyCreationForm( void );
	const ShrubberyCreationForm& operator=( ShrubberyCreationForm const & rhs);
};

#endif