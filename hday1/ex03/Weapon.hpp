/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:18:37 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/08 15:15:37 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private :
			std::string	_type;

	public :
			Weapon(void);
			Weapon(std::string type);
			~Weapon(void);

			const std::string	&getType(void) const;
			void		setType(std::string new_type);
};

#endif