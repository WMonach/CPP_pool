/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:32:29 by will              #+#    #+#             */
/*   Updated: 2023/03/02 10:39:09 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

# include <iostream>
# include <stdexcept>
class Bureaucrat;

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
        class AlreadySigned : public std::exception
        {
        public :
            virtual const char* what() const throw()
            {
                return ("Contrat already signed");
            }
        };
		class NotSigned : public std::exception
        {
        public :
            virtual const char* what() const throw()
            {
                return ("Try to execute contrat before signed");
            }
        };
        
	protected :
		const std::string	_Name;
		bool			    _Signature;
		const int	_GradeToSign;
		const int	_ExecutionGrade;

	public :
		Form( void );
		Form( std::string name, const int gradeToSign, const int gradeToExecute );
		Form( Form const & rhs);
		virtual ~Form( void );
		const Form& operator=( Form const & rhs);
        virtual void    beSigned( const Bureaucrat &employee );
        bool    getSignature( void ) const;
        const std::string   getName( void ) const;
        int   getGradeToSign( void ) const;
        int   getExecutionGrade( void ) const;
		virtual void	execute( const Bureaucrat &intern ) const = 0;
};

std::ostream	&operator<<( std::ostream & o, Form const & rhs);


#endif