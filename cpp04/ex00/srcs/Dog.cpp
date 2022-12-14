/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:48:44 by avillar           #+#    #+#             */
/*   Updated: 2022/12/13 14:08:55 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(/* args */)
{
	this->setType("Dog");
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog &og)
{
	operator=(og);
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called." << std::endl;
}

Dog&	Dog::operator=(const Dog &og)
{
	this->setType(og.getType());
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "We can ear a dog barking." << std::endl;
}