/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:43:42 by avillar           #+#    #+#             */
/*   Updated: 2022/11/24 14:42:02 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(/* args */)
{
	this->setEnergy(50);
	this->setHp(100);
	this->setName("ScavDefault");
	this->setAttackDmg(20);
	this->setType("ScavTrap");
	std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->setEnergy(50);
	this->setHp(100);
	this->setName(name);
	this->setAttackDmg(20);
	this->setType("ScavTrap");
	std::cout << "ScavTrap " << name << " has been created." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destrucor called." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " has entered in Gate Keeper mode." << std::endl;
}