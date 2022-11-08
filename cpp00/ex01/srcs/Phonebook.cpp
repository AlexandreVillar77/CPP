/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:54:44 by avillar           #+#    #+#             */
/*   Updated: 2022/11/08 11:55:56 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook.hpp"

Phonebook::Phonebook(/* args */) : count(-1) {}

Phonebook::~Phonebook()
{
}

int		Phonebook::getCount()
{
	return (this->count);
}

void	Phonebook::createContact(std::string first, std::string last, std::string nick,
				std::string phone, std::string dark)
{
	int	i;
	Contact contact;

	i = 0;
	this->count++;
	i = (this->count % 8);
	contact.setIndex(i + 1);
	contact.setFirstName(first);
	contact.setLastName(last);
	contact.setNickName(nick);
	contact.setPhone(phone);
	contact.setDark(dark);
	this->contact[i] = contact;
}

void	print_id(Contact contact)
{
	std::cout << "|";
	for (size_t j = 0; j < 9; j++)
		std::cout << " ";
	std::cout << (int)contact.getIndex();
	std::cout << "|";
}

void	print_str(std::string str)
{
	if (str.size() < 10)
	{
		for (size_t i = 0; i < (10 - str.size()); i++)
			std::cout << " ";
	}
	if (str.size() > 10)
	{
		for (size_t t = 0; t < 9; t++)
		{
			std::cout << str[t];
		}
		std::cout << ".|";
	}
	else
		std::cout << str << "|";
}

void	Phonebook::printAllContact()
{
	std::cout << "_____________________________________________\n";
	std::cout << "|          |          |          |          |\n";
	std::cout << "|    id    |first name|last name |nickname  |\n";
	std::cout << "|__________|__________|__________|__________|\n";
	for (int i = 0; (i < 8); i++)
	{
		if (i > this->count)
			break ;
		std::cout << "|          |          |          |          |\n";
		print_id(this->contact[i]);
		print_str(this->contact[i].getFirstName());
		print_str(this->contact[i].getLastName());
		print_str(this->contact[i].getNickName());
		std::cout << "\n|__________|__________|__________|__________|\n";
	}
	
}

void	Phonebook::printThis(int id)
{
	std::cout << "First name : " << this->contact[id - 1].getFirstName() << "\n";
	std::cout << "Last name : " << this->contact[id - 1].getLastName() << "\n";
	std::cout << "Nickname : " << this->contact[id - 1].getNickName() << "\n";
	std::cout << "Phone number : " << this->contact[id - 1].getPhone() << "\n";
	std::cout << "Darkest secret : " << this->contact[id - 1].getDark() << "\n\n";
}
