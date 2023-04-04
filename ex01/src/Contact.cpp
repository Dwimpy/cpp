/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:13:08 by arobu             #+#    #+#             */
/*   Updated: 2023/04/03 23:56:30 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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

void	Contact::print_contact(void)
{
	std::cout << this->FirstName << std::endl;
	std::cout << this->LastName << std::endl;
	std::cout << this->Nickname << std::endl;
	std::cout << this->PhoneNumber << std::endl;
	std::cout << this->DarkestSecret << std::endl;
}
