/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:08:01 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/23 19:26:54 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

class Form;

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