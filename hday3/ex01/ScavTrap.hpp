/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:53:13 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/14 19:00:33 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private :
	
	public :
	ScavTrap( void );
	ScavTrap( ScavTrap const & obj );
	~ScavTrap( void );
	~ScavTrap( void );
	ScavTrap&	operator=( ScavTrap const & obj);
	
	void guardGate( void );
	
	protected :
};

#endif