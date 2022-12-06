/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:33:58 by avillar           #+#    #+#             */
/*   Updated: 2022/11/24 14:40:47 by avillar          ###   ########.fr       */
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
	std::string		_type;

public:
	ClapTrap(/* args */);
	ClapTrap(std::string name);
	~ClapTrap();

	void			setName(std::string name);
	void			setAttackDmg(unsigned int amount);
	void			setHp(int amount);
	int				getHp( void ) const;
	unsigned int	getAttackDmg( void ) const;
	std::string		getName( void );
	void			setEnergy(unsigned int amount);
	unsigned int	getEnergy( void );
	void			setType(std::string type);
	std::string		getType( void );

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif