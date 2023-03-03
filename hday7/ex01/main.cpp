/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:12:04 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/03 13:04:26 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	putnothing(int	& tab)
{
	std::cout << tab << " : ";
}

int	main(void)
{
	int	tab[42] = {2, 42, 5, 28, 2, 42, 5, 28, 2, 42, 5, 28, 2, 42, 5, 28, 2, 42, 5, 28, 2, 42, 5, 28, 2, 42, 5, 28, 2, 42, 5, 28, 2, 42, 5, 28, 2, 42, 5, 28, 42, 42};
	
	iter(tab, 42, &putnothing);
	std::cout << std::endl;
}

// class Awesome
// {
// 	public:
// 	Awesome( void ) : _n( 42 ) { return; }
// 	int get( void ) const { return this->_n; }
// 	private:
// 	int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }


	
// int main() {
// 	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
// 	Awesome tab2[5];
// 	iter( tab, 5, print );
// 	iter( tab2, 5, print );
// 	return 0;
// }