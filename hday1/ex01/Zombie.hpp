/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:18:09 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/09 17:43:51 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
	private :
				std::string _name;

	public :
				Zombie( void );
				Zombie(std::string name);
				~Zombie( void );
				
				void	annouce( void );
				void	setName( std::string name );
};

#endif