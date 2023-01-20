/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:52:52 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/20 16:42:51 by wmonacho         ###   ########lyon.fr   */
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
		int		_number_of_try_negative;
		int		_number_of_try_no_contact;
		int		_number_of_try_upper_8;

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
		void	display_contact(size_t index);
		void	display_one_contact_with_details(void);
		void	check_contact_selection(size_t index, size_t check_contact_full, Contact *repertory);
		void	display(std::string string);
		void	display_details(std::string infos, std::string string);
};

#endif