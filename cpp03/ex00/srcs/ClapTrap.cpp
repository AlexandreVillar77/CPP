/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:34:39 by avillar           #+#    #+#             */
/*   Updated: 2022/11/24 13:41:19 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default") , _hitPts(10) , _energyPts(10) , _attackDmg(0)
{
	std::cout << "Default constructor called" << std::endl;
}


ClapTrap::ClapTrap(std::string name) : _name(name) , _hitPts(10) , _energyPts(10) , _attackDmg(0)
{
	std::cout << "ClapTrap " << name << " has been created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::setHp(int amount)
{
	_hitPts = amount;
}

int		ClapTrap::getHp( void ) const
{
	return (_hitPts);
}

std::string	ClapTrap::getName( void )
{
	return (_name);
}

unsigned int	ClapTrap::getAttackDmg( void ) const
{
	return (_attackDmg);
}

void			ClapTrap::setEnergy(unsigned int amount)
{
	_energyPts = amount;
}

unsigned int	ClapTrap::getEnergy( void )
{
	return (_energyPts);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->getEnergy() < 1 || this->getHp() < 1)
	{
		std::cout << "ClapTrap " << this->getName() << " don't have energy to do any action." << std::endl;
		return ;
	}
	this->setEnergy(this->getEnergy() - 1);
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << _attackDmg << " damage." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHp() < 1)
	{
		std::cout << this->getName() << " is already dead." << std::endl;
		return ;
	}
	this->setHp(this->getHp() - amount);
	std::cout << "ClapTrap " << this->getName() << "get attacked, he loosed " << amount << " hp, only " << this->getHp() << " remaining." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getEnergy() < 1 || this->getHp() < 1)
	{
		std::cout << "ClapTrap " << this->getName() << " don't have energy to do any action." << std::endl;
		return ;
	}
	this->setEnergy(this->getEnergy() - 1);
	this->setHp(this->getHp() + amount);
	std::cout << "ClapTrap " << this->getName() << " repair himself, he gain " << amount << " hp." << std::endl;
}