/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:34:39 by avillar           #+#    #+#             */
/*   Updated: 2022/12/06 15:40:03 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default") , _hitPts(10) , _energyPts(10) , _attackDmg(0) , _type("ClapTrap")
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}


ClapTrap::ClapTrap(std::string name) : _name(name) , _hitPts(10) , _energyPts(10) , _attackDmg(0)
{
	std::cout << "ClapTrap " << name << " has been created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void	ClapTrap::setHp(int amount)
{
	_hitPts = amount;
}

void	ClapTrap::setName(std::string name)
{
	_name = name;
}

void	ClapTrap::setAttackDmg(unsigned int amount)
{
	_attackDmg = amount;
}

int		ClapTrap::getHp( void ) const
{
	return (_hitPts);
}

std::string	ClapTrap::getName( void )
{
	return (this->_name);
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

void	ClapTrap::setType(std::string type)
{
	_type = type;
}

std::string ClapTrap::getType( void )
{
	return (_type);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->getEnergy() < 1 || this->getHp() < 1)
	{
		std::cout << this->getType() << " " << this->getName() << " don't have energy to do any action." << std::endl;
		return ;
	}
	this->setEnergy(this->getEnergy() - 1);
	std::cout << this->getType() << " " << this->getName() << " attacks " << target << ", causing " << _attackDmg << " damage." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHp() < 1)
	{
		std::cout << this->getName() << " is already dead." << std::endl;
		return ;
	}
	this->setHp(this->getHp() - amount);
	std::cout << this->getType() << " " << this->getName() << "get attacked, he loosed " << amount << " hp, only " << this->getHp() << " remaining." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getEnergy() < 1 || this->getHp() < 1)
	{
		std::cout << this->getType() << " " << this->getName() << " don't have energy to do any action." << std::endl;
		return ;
	}
	this->setEnergy(this->getEnergy() - 1);
	this->setHp(this->getHp() + amount);
	std::cout << this->getType() << " " << this->getName() << " repair himself, he gain " << amount << " hp." << std::endl;
}