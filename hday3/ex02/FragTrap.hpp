/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:38:54 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/15 14:39:39 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public :
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const & obj );
	~FragTrap( void );
	FragTrap&	operator=( FragTrap const & obj);
	
	void 	highFivesGuys(void);
	void	attack(const std::string& target);
};

#endif