/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:13:10 by arobu             #+#    #+#             */
/*   Updated: 2023/06/21 15:40:11 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "iomanip"
#include "stdio.h"

PhoneBook::PhoneBook(void){index = 0;}

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

	if (this->index % 8 == 0)
		this->index = 0;
	Add_FirstName(FirstName);
	Add_LastName(LastName);
	Add_NickName(Nickname);
	Add_PhoneNumber(PhoneNumber);
	Add_DarkestSecret(DarkestSecret);
	contacts[this->index] = Contact(FirstName, LastName, Nickname, PhoneNumber, DarkestSecret);
	this->index++;
}

int	PhoneBook::search_contact(void)
{
	std::string	index;

	if (this->get_contact(0).get_first_name().empty())
	{
		std::cout << "Phonebook is empty, please add a contact!" << std::endl;
		return (1);
	}
	this->Print_PhoneBook();
	std::cout << "Select a contact to view it's info" << std::endl;
	getline(std::cin, index);
	if (std::cin.eof())
		exit(0);
	else if (!std::any_of(index.begin(), index.end(), ::isdigit))
		std::cout << "Index should be a valid digit" << std::endl;
	else if (this->get_contact(std::stoi(index)).get_first_name().empty())
		std::cout << "Index out of range" << std::endl;
	else
		this->get_contact(std::stoi(index)).print_contact_info();
	return (0);
}

void	PhoneBook::Print_PhoneBook(void)
{
	int	i;

	i = 0;
	const std::string delim = "\u250A";
	while (i < 8)
	{
		if (!this->contacts[i].get_first_name().empty())
		{
			std::cout << delim;
			std::cout << std::right << std::setw(10) << i << " " + delim + " ";
			contacts[i].print_contact_table();
		}
		i++;
	}
}

void	PhoneBook::Add_FirstName(std::string &value)
{

	while (value.empty())
	{
		std::cout << "Please enter your First Name: ";
		getline(std::cin, value);
		if (std::cin.eof())
			std::exit(1);
		else if (value.empty())
			std::cout << "Field cannot be empty!";
	}
}

void	PhoneBook::Add_LastName(std::string &value)
{

	while (value.empty())
	{
		std::cout << "Please enter your Last Name: ";
		getline(std::cin, value);
		if (std::cin.eof())
			std::exit(1);
		else if (std::any_of(value.begin(), value.end(), ::isdigit))
		{
			std::cout << "Field cannot contain digits" << std::endl;
			value.clear();
		}
		else if (value.empty())
			std::cout << "Field cannot be empty" << std::endl;
	}
}

void	PhoneBook::Add_NickName(std::string &value)
{

	while (value.empty())
	{
		std::cout << "Please enter your Nickname: ";
		getline(std::cin, value);
		if (std::cin.eof())
			std::exit(1);
		else if (value.empty())
			std::cout << "Field cannot be empty" << std::endl;
	}
}

void	PhoneBook::Add_PhoneNumber(std::string &value)
{

	while (value.empty())
	{
		std::cout << "Please enter your Phone Number: ";
		getline(std::cin, value);
		if (std::cin.eof())
			std::exit(1);
		else if (!std::any_of(value.begin(), value.end(), ::isdigit))
		{
			std::cout << "Field cannot contain alphabetical numbers" << std::endl;
			value.clear();
		}
		else if (value.empty())
			std::cout << "Field cannot be empty" << std::endl;
	}
}

void	PhoneBook::Add_DarkestSecret(std::string &value)
{

	while (value.empty())
	{
		std::cout << "Please enter your Darkest Secret: ";
		getline(std::cin, value);
		if (std::cin.eof())
			std::exit(1);
		else if (value.empty())
			std::cout << "Field cannot be empty" << std::endl;
	}
}
