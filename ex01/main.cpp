/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:15:03 by arobu             #+#    #+#             */
/*   Updated: 2023/06/22 13:02:11 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{	
	(void)argc;
	(void)argv;
	PhoneBook	new_phonebook;
	std::string	line;
	std::string	index;

	std::cout << "Phonebook valid commands:" << std::endl;
	std::cout << "Commands are case-sensitive" << std::endl;
	std::cout << "Type ADD to add a contact to the phonebook" << std::endl;
	std::cout << "Type SEARCH to look for contact in the phonebook" << std::endl;
	std::cout << "Type EXIT to exit the program" << std::endl;
	while (1)
	{
		getline(std::cin, line);
		if (std::cin.eof())
			exit(0);
		else if (line == "ADD")
			new_phonebook.add_contact();
		else if (line == "SEARCH")
		{
			if (new_phonebook.search_contact())
				continue ;
		}
		else if (line == "EXIT")
			std::exit(0);
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}
