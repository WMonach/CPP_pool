/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:06:49 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/07 14:54:46 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>

class Harl
{
    private :
    std::string _cmd[4];
    void        debug(void);
    void        info(void);
    void        warning(void);
    void        error(void);
    void		(Harl::*_pointers_function[4])(void);
    
    public :
    Harl( void );
    ~Harl( void );
    
    void    complain(std::string comments);
};

#endif