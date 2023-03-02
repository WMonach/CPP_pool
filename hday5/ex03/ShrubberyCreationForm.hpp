/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:08:56 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/02 10:38:36 by wmonacho         ###   ########.fr       */
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
	ShrubberyCreationForm( std::string target );
	ShrubberyCreationForm( ShrubberyCreationForm const & rhs);
	~ShrubberyCreationForm( void );
	const ShrubberyCreationForm& operator=( ShrubberyCreationForm const & rhs);
	std::string	getTarget( void ) const;
	virtual void	execute( const Bureaucrat &intern ) const;
};

#endif