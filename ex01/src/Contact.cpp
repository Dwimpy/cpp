/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:13:08 by arobu             #+#    #+#             */
/*   Updated: 2023/06/21 15:07:13 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "iomanip"

Contact::Contact(){}

Contact::Contact(const Contact &contact)
{
	this->FirstName = contact.FirstName;
	this->LastName = contact.LastName;
	this->Nickname = contact.Nickname;
	this->PhoneNumber = contact.PhoneNumber;
	this->DarkestSecret = contact.DarkestSecret;
}

Contact::Contact(std::string FirstName, std::string LastName, std::string Nickname, std::string PhoneNumber, std::string DarkestSecret)
{
	this->FirstName = FirstName;
	this->LastName = LastName;
	this->Nickname = Nickname;
	this->PhoneNumber = PhoneNumber;
	this->DarkestSecret = DarkestSecret;
}

Contact::~Contact(){}

std::string Contact::truncate(std::string str)
{
	std::string truncated;

	if (str.length() >= 10)
	{
		truncated = str.substr(0, 9);
		truncated.replace(9, 10, ".");
		return (truncated);
	}
	else
		return (str);
}

void	Contact::print_contact_info(void)
{
	std::cout << "First Name: " << this->FirstName << std::endl;
	std::cout << "Last Name: " << this->LastName << std::endl;
	std::cout << "Nickname: " << this->Nickname << std::endl;
	std::cout << "Phone Number: " << this->PhoneNumber << std::endl;
	std::cout << "Darkest Secret: " << this->DarkestSecret << std::endl;
}

std::string	Contact::get_first_name(void)
{
	return (this->FirstName);
}

void	Contact::print_contact_table(void)
{
	const std::string delim = "\u250A";

	std::cout << std::right << std::setw(10) << truncate(this->FirstName) << " " + delim + " " <<
	std::right << std::setw(10) << truncate(this->LastName) << " " + delim + " " <<
	std::right << std::setw(10) << truncate(this->Nickname) << delim << std::endl;
}
