/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:33:58 by avillar           #+#    #+#             */
/*   Updated: 2022/11/24 13:32:59 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

# include <iostream>

class ClapTrap
{
private:
	std::string		_name;
	int				_hitPts;
	unsigned int	_energyPts;
	unsigned int	_attackDmg;

public:
	ClapTrap(/* args */);
	ClapTrap(std::string name);
	~ClapTrap();

	void			setHp(int amount);
	int				getHp( void ) const;
	unsigned int	getAttackDmg( void ) const;
	std::string		getName( void );
	void			setEnergy(unsigned int amount);
	unsigned int	getEnergy( void );

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif