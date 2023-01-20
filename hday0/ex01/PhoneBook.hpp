/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:52:57 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/20 14:35:42 by wmonacho         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private :
		Contact	_repertory[8];
		size_t		_index;
		size_t		_repertory_full_check;

	public :
		PhoneBook(void);
		~PhoneBook(void);
		
		void	welcome_message(void);
		void	ft_setcontact(void);
		void	set_index(void);
		void	set_contact(Contact *contact);
		void	ft_display_contact(Contact perso);
		size_t	get_index(void);
		size_t	get_check(void);
		
};

#endif