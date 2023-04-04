/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:15:03 by arobu             #+#    #+#             */
/*   Updated: 2023/04/04 22:59:08 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{	
	PhoneBook new_phonebook;
	std::string line;
	
	Contact new_contact("asd", "ASD", "GGG", "HDG", "ASDG");
	while (1)
	{
		getline(std::cin, line);
		if (line == "ADD")
			new_phonebook.add_contact();
		if (std::cin.eof())
			break ;
	}
	// new_phonebook.get_contact(0).print_contact();
	return (0);
}
