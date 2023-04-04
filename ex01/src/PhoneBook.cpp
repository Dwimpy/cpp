/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:13:10 by arobu             #+#    #+#             */
/*   Updated: 2023/04/04 23:00:03 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "stdio.h"

PhoneBook::PhoneBook(void){}

Contact PhoneBook::get_contact(int index)
{
	return (this->contacts[index]);
}

void PhoneBook::add_contact()
{
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;

	get_input(FirstName);
	// get_input(FirstName);
	// get_input(FirstName);
	// get_input(FirstName);
	// get_input(FirstName);
	std::cout << FirstName << std::endl;
}

int	PhoneBook::get_input(std::string &value)
{

	while (1)
	{
		std::cout << "Please enter your First Name:" << std::endl;
		getline(std::cin, value);
		if (std::cin.eof())
			return (0);
		else if (value.empty())
			std::cout << "Field cannot be empty" << std::endl;
		else
			return (value.length());
	}
}
