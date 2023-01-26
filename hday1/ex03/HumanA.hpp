/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:48:21 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/26 17:53:49 by wmonacho         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>

class HumanA
{
	private :
			std::string	_name;
			std::string	_weapon;
	public :
			HumanA(void);
			~HumanA(void);

			void	attack(void);

};

#endif