/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:39:35 by avillar           #+#    #+#             */
/*   Updated: 2022/11/14 12:42:33 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string name) : _name(name) {}

Weapon::~Weapon(){}

std::string	Weapon::getType()
{
	return(_name);
}

void	Weapon::setType(std::string name)
{
	_name = name;
}