/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:47:14 by avillar           #+#    #+#             */
/*   Updated: 2022/12/13 14:10:36 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(/* args */) : _type("Unknown")
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called." << std::endl;
}

Animal&	Animal::operator=(const Animal &og)
{
	_type = og.getType();
	return (*this);
}

Animal::Animal(const Animal &og)
{
	operator=(og);
}

void	Animal::setType(std::string const type)
{
	_type = type;
}

std::string		Animal::getType() const
{
	return (_type);
}

void	Animal::makeSound() const
{
	std::cout << "Unknown type of noise here." << std::endl;
}