/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:51:29 by avillar           #+#    #+#             */
/*   Updated: 2022/12/13 14:56:02 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(/* args */)
{
	this->_brain = new Brain();
	for(int i = 0; i < 100; i++)
		this->_brain->setIdea(i, "Cat idea");
	this->setType("Cat");
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat &og)
{
	operator=(og);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat default destrutor called." << std::endl;
}

Cat&	Cat::operator=(const Cat &og)
{
	this->setType(og.getType());
	return (*this);
}

Brain	*Cat::getBrain() const
{
	return (this->_brain);
}

void	Cat::makeSound() const
{
	std::cout << "We can ear a cat meows." << std::endl;
}