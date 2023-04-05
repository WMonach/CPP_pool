/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:55:08 by wmonacho          #+#    #+#             */
/*   Updated: 2023/04/05 16:17:15 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream> 
# include <string>
# include <stack>
# include <cstdlib>

class	RPN {
	
	private:
		std::stack<int> _operands;
		void	operation( char c );
		void	print_value( void );
		
	public :

		RPN(void);
		RPN(RPN const &ref);
		RPN &operator=(RPN const &ref);
		~RPN(void);
		
		void	calculate(std::string calculation);
};

class Exception: public std::exception
{
    protected:
        std::string msg;
    public:
        Exception() {
            this->msg = "Exception : ";
        }

        Exception(std::exception exception) {
            this->msg = exception.what() + msg;
        }

        ~Exception()throw(){};

        virtual char const * what() const throw() {
            return msg.c_str();
        };
};

class ArgInvalid : public Exception
{   public:
        ArgInvalid() {
            this->msg += "Argument is invalid : ";
        }
};

class InvalidChar : public ArgInvalid
{   public:
        InvalidChar() {
            this->msg += "invalid char detected";
        }
};

#endif