/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:02:18 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/28 16:37:30 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

int	main(int argc, char **argv)
{
	Main	main;
	if (argc != 2)
		return (1);
	main.parsing(argv[1]);
	return (0);
}

Main::Main( void )
{
}

Main::~Main( void )
{
}

Main::Main( Main const & rhs)
{
	*this = obj;
}

const Main& Main::operator=( Main const & obj)
{
	return (*this);
}

void	Main::parsing( char *Reprensation )
{
	
}