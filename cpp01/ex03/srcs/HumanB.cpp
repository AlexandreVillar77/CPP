/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:40:04 by avillar           #+#    #+#             */
/*   Updated: 2022/11/14 13:01:49 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	_weapon = NULL;
}

HumanB::~HumanB()
{
	//delete _weapon;
}

Weapon	HumanB::getWeapon()
{
	return(*_weapon);
}

void	HumanB::setWeapon(Weapon &weapon)
{
	/*if (_weapon)
		delete _weapon;
	_weapon = new Weapon(weapon.getType());*/
	_weapon = &weapon;
}

std::string	HumanB::getName()
{
	return (_name);
}

void	HumanB::setName(std::string name)
{
	_name = name;
}

void	HumanB::attack()
{
	if (!(_weapon))
	{
		std::cout << _name << " attacks Nothing" << std::endl;
	}
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}