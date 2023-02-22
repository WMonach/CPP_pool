/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:08:17 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/22 18:05:53 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try {
        Bureaucrat lol("Jerome_Powell", 155);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}