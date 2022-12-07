/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:21:21 by avillar           #+#    #+#             */
/*   Updated: 2022/12/07 09:14:19 by avillar          ###   ########.fr       */
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

//operator overload

void	FragTrap::operator=(const FragTrap&og)
{
	this->setName(og.getName());
	this->setAttackDmg(og.getAttackDmg());
	this->setEnergy(og.getEnergy());
	this->setHp(og.getHp());
	this->setType(og.getType());
}

FragTrap::FragTrap(const FragTrap &og)
{
	operator=(og);
}


void	FragTrap::highFivesGuys(void)
{
	std::cout << this->getType() << " " << this->getName() << " ask for a highFive !" << std::endl;
}