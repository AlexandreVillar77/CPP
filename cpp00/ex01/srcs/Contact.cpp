/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:45:57 by avillar           #+#    #+#             */
/*   Updated: 2022/11/07 14:13:43 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

/*

		GETTER

*/

int			Contact::getIndex()
{
	return (this->index);
}

std::string	Contact::getFirstName()
{
	return (this->firstName);
}

std::string	Contact::getLastName()
{
	return (this->lastName);
}

std::string	Contact::getNickName()
{
	return (this->nickName);
}

std::string	Contact::getPhone()
{
	return (this->phone);
}

std::string	Contact::getDark()
{
	return (this->dark);
}

/*

		SETTER

*/

void	Contact::setIndex(int i)
{
	this->index = i;
}

void	Contact::setFirstName(std::string string)
{
	this->firstName = string;
}

void	Contact::setLastName(std::string string)
{
	this->lastName = string;
}

void	Contact::setNickName(std::string string)
{
	this->nickName = string;
}

void	Contact::setPhone(std::string string)
{
	this->phone = string;
}

void	Contact::setDark(std::string string)
{
	this->dark = string;
}