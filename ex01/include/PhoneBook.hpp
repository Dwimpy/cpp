/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:05:37 by arobu             #+#    #+#             */
/*   Updated: 2023/06/21 15:36:51 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		Contact			get_contact(int index);
		void			add_contact();
		int				search_contact();
		void			Add_FirstName(std::string &value);
		void			Add_LastName(std::string &value);
		void			Add_NickName(std::string &value);
		void			Add_PhoneNumber(std::string &value);
		void			Add_DarkestSecret(std::string &value);
		void			Print_PhoneBook(void);
	private:
		int		index;
		Contact contacts[8];
};

#endif
