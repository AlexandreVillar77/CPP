/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:28:03 by avillar           #+#    #+#             */
/*   Updated: 2022/12/13 14:08:49 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */) : _type("unknown")
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &og)
{
	operator=(og);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimla default destructor called." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &og)
{
	_type = og.getType();
	return (*this);
}

void	WrongAnimal::setType(std::string const type)
{
	_type = type;
}

std::string		WrongAnimal::getType() const
{
	return (_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Some wrong noises" << std::endl;
}