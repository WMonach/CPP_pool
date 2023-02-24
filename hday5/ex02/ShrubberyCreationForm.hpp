/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:08:56 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/24 16:47:14 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private :
	const 
	std::string	_Target;

	public :
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( std::string target );
	ShrubberyCreationForm( ShrubberyCreationForm const & rhs);
	~ShrubberyCreationForm( void );
	const ShrubberyCreationForm& operator=( ShrubberyCreationForm const & rhs);
	std::string	getTarget( void ) const;
	void	execute( void ) const;
};

#endif