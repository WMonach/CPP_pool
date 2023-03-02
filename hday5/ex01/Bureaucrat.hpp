/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:08:59 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/02 10:12:56 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

# include <iostream>
# include <stdexcept>
class Form;

class Bureaucrat
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
        const std::string   _Name;
        int        _Grade;
    
    public :
        Bureaucrat( void );
        Bureaucrat( std::string name, int grade );
        Bureaucrat( Bureaucrat const & rhs);
        ~Bureaucrat( void );
        const Bureaucrat& operator=( Bureaucrat const & rhs);
        const std::string& getName( void ) const;
        int   getGrade( void ) const;
        void		retrograde( void );
		void		promotion( void );
        void        signForm(Form &Contrat) const;
};
std::ostream	&operator<<( std::ostream & o, Bureaucrat const & rhs);

#endif