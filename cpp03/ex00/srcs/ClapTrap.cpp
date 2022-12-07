/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:34:39 by avillar           #+#    #+#             */
/*   Updated: 2022/12/07 08:58:06 by avillar          ###   ########.fr       */
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

//operator overload

void	ClapTrap::operator=(const ClapTrap &og)
{
	this->_name = og.getName();
	this->_attackDmg = og.getAttackDmg();
	this->_energyPts = og.getEnergy();
	this->_hitPts = og.getHp();
}

//Copy Constructor
/*
* call operator=() or just this->_rawBits = og._rawBits;
*/


ClapTrap::ClapTrap(const ClapTrap &og)
{
	operator=(og);
}

void	ClapTrap::setHp(int amount)
{
	_hitPts = amount;
}

int		ClapTrap::getHp( void ) const
{
	return (_hitPts);
}

std::string	ClapTrap::getName( void ) const
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

unsigned int	ClapTrap::getEnergy( void ) const
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