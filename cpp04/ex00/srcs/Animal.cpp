/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:47:14 by avillar           #+#    #+#             */
/*   Updated: 2022/12/06 16:11:53 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(/* args */) : _type("Unknown")
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animale default destructor called." << std::endl;
}

std::string		Animal::getType() const
{
	return (_type);
}

void	Animal::setType(std::string type) const
{
	_type = type;
}

void	Animal::makeSound() const
{
	std::string	type[3] = {"Unknown", "Dog", "Cat"};
	for (int i = 0; i < 3; i++)
	{
		if (type[i].compare(_type) == 0)
		{
			switch (i)
			{
				case 0:
					std::cout << "Unknown type of noise here." << std::endl;
					break;
				case 1:
					std::cout << "We can ear a dog barking." << std::endl;
					break;
				case 2:
					std::cout << "We can ear a cat meows." << std::endl;
					break;
				default:
					break;
			}
			return ;
		}
	}
}