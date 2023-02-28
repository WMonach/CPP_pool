/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:12:33 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/28 15:25:49 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
#define MAIN_H

#include <iostream>

Class Main
{	
	public :
	Main(void);
	~Main(void)
	Main(Main const & rhs);
	const Main& operator=(Main const & obj);
	void	parsing( void );
	
	int	TypInt;
	Float	TypFloat;
	double	TypDouble;
	char	*TypChar;
};

#endif