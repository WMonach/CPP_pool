/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:55:08 by wmonacho          #+#    #+#             */
/*   Updated: 2023/04/04 16:17:34 by wmonacho         ###   ########.fr       */
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
		std::stack<int> operands;
	public :

		RPN(void);
		RPN(RPN const &ref);
		RPN &operator=(RPN const &ref);
		~RPN(void);
};

#endif