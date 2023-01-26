/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:49:17 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/26 17:53:52 by wmonacho         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>

class HumanB
{
	private :
			std::string	_name;
			std::string	_weapon;
	public :
			HumanB(void);
			~HumanB(void);

			void	attack(void);
};

#endif