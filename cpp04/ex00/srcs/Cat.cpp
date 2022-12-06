/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:51:29 by avillar           #+#    #+#             */
/*   Updated: 2022/12/06 15:55:09 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(/* args */)
{
	this->setType("Cat");
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat default destrutor called." << std::endl;
}