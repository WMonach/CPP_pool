/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:53:13 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/17 13:53:45 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public :
	ScavTrap( void );
	ScavTrap( const std::string &name );
	ScavTrap( ScavTrap const & obj );
	~ScavTrap( void );
	ScavTrap&	operator=( ScavTrap const & obj);
	
	void guardGate( void );
	void	attack(const std::string& target);
};

#endif