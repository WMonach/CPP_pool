/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:52:52 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/19 17:07:34 by wmonacho         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H


# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
	private :
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;

	public :
		Contact(void);
		~Contact(void);
		
		void	set_first_name(void);
		void	set_last_name(void);
		void	set_nickname(void);
		void	set_phone_number(void);
		void	set_darkest_secret(void);
		int		select_contact(void);
		int		check_contact_index(std::string contact_index_string);
		void	display_contact(void);
};

#endif