/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:55:08 by wmonacho          #+#    #+#             */
/*   Updated: 2023/05/22 13:48:52 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream> 
# include <algorithm>
# include <string>
# include <stack>
# include <cstdlib>

class	RPN {
	
	private:
		std::stack<float> _operands;
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

class DivByZero : public ArgInvalid
{   public:
        DivByZero() {
            this->msg += "invalid division";
        }
};

class NotDigit : public ArgInvalid
{   public:
        NotDigit() {
            this->msg += "not a digit or negative number";
        }
};

class TooOpe : public ArgInvalid
{   public:
        TooOpe() {
            this->msg += "too much operator";
        }
};

class TooOpa : public ArgInvalid
{   public:
        TooOpa() {
            this->msg += "too much operands";
        }
};

class End : public ArgInvalid
{   public:
        End() {
            this->msg += "Argument don't end with an operator";
        }
};

class NoOperands : public ArgInvalid
{   public:
        NoOperands() {
            this->msg += "No operands for operator";
        }
};


#endif