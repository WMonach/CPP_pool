/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:08:56 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/23 19:30:25 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

class Form;

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