/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:39:56 by avillar           #+#    #+#             */
/*   Updated: 2022/11/14 12:39:31 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon) , _name(name)
{
}

HumanA::~HumanA()
{
}

Weapon	HumanA::getWeapon()
{
	return(_weapon);
}

void	HumanA::setWeapon(Weapon weapon)
{
	_weapon = weapon;
}

std::string	HumanA::getName()
{
	return (_name);
}

void	HumanA::setName(std::string name)
{
	_name = name;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}