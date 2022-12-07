/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:33:58 by avillar           #+#    #+#             */
/*   Updated: 2022/12/07 09:06:36 by avillar          ###   ########.fr       */
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

	// recopy constructor
	ClapTrap(const ClapTrap &og);

	//operator overload *
	void	operator=(const ClapTrap &og);

	void			setHp(int amount);
	int				getHp( void ) const;
	unsigned int	getAttackDmg( void ) const;
	void			setAttackDmg(unsigned int amout);
	std::string		getName( void ) const;
	void			setName(std::string name);
	void			setEnergy(unsigned int amount);
	unsigned int	getEnergy( void ) const;
	void			setType(std::string type);
	std::string		getType( void ) const;

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif