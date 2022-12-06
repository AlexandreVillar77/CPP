/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:48:44 by avillar           #+#    #+#             */
/*   Updated: 2022/12/06 15:55:14 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(/* args */)
{
	this->setType("Dog");
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called." << std::endl;
}