/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:48:44 by avillar           #+#    #+#             */
/*   Updated: 2022/12/13 14:56:23 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(/* args */)
{
	this->_brain = new Brain();
	for(int i = 0; i < 100; i++)
		this->_brain->setIdea(i, "Dog idea");
	this->setType("Dog");
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog &og)
{
	operator=(og);
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog default destructor called." << std::endl;
}

Dog&	Dog::operator=(const Dog &og)
{
	this->setType(og.getType());
	return (*this);
}

Brain	*Dog::getBrain() const
{
	return (this->_brain);
}

void	Dog::makeSound() const
{
	std::cout << "We can ear a dog barking." << std::endl;
}