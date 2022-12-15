/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:38:49 by avillar           #+#    #+#             */
/*   Updated: 2022/12/13 14:09:42 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(/* args */)
{
	this->setType("WrongCat");
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &og)
{
	operator=(og);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat defaul detructor called.";
}

WrongCat&	WrongCat::operator=(const WrongCat &og)
{
	this->setType(og.getType());
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "some wrong cat noises." << std::endl;
}