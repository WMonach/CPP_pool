/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:02:20 by will              #+#    #+#             */
/*   Updated: 2023/02/28 14:37:46 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include "Form.hpp"

class Intern
{
	private :
	std::string	_NameForm[3];

	public :
	Intern( void );
	Intern( Intern const & rhs);
	~Intern( void );
	const Intern& operator=( Intern const& obj);
	
	Form*	MakeForm(std::string FormName, std::string Target);
};

#endif