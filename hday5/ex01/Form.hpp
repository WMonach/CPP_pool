/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:32:29 by will              #+#    #+#             */
/*   Updated: 2023/02/22 22:41:39 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <iostream>

class Form
{
	public :
        class GradeTooHighException : public std::exception
        {
            public :
                virtual const char* what() const throw()
                {
                    return ("Grade too high");
                }
        };  
        
        class GradeTooLowException : public std::exception
        {
            public :
                virtual const char* what() const throw()
                {
                    return ("Grade too low");
                }
        };
	private :
		const std::string	_Name;
		bool			Signature;
		unsigned int	GradeToSign;
		unsigned int	ExecutionGrade;

	public :
		Form( void );
		Form( std::string name, int grade );
		Form( Form const & rhs);
		~Form( void );
		const Form& operator=( Form const & rhs);
};


#endif