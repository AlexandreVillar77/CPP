/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:51:29 by avillar           #+#    #+#             */
/*   Updated: 2022/12/13 14:08:59 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(/* args */)
{
	this->setType("Cat");
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat &og)
{
	operator=(og);
}

Cat::~Cat()
{
	std::cout << "Cat default destrutor called." << std::endl;
}

Cat&	Cat::operator=(const Cat &og)
{
	this->setType(og.getType());
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "We can ear a cat meows." << std::endl;
}