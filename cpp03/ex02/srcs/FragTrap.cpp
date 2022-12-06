/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:21:21 by avillar           #+#    #+#             */
/*   Updated: 2022/12/06 15:40:41 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(/* args */)
{
	this->setEnergy(100);
	this->setHp(100);
	this->setName("FragDefault");
	this->setAttackDmg(30);
	this->setType("FragTrap");
	std::cout << this->getType() << " default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->setEnergy(100);
	this->setHp(100);
	this->setName(name);
	this->setAttackDmg(30);
	this->setType("FragTrap");
	std::cout << this->getType() << " " <<  name << " has been created." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->getType() << " Destrucor called." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->getType() << " " << this->getName() << " ask for a highFive !" << std::endl;
}