/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:39:48 by avillar           #+#    #+#             */
/*   Updated: 2022/11/14 12:57:43 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
# define __HUMANB_HPP__

#include "./Weapon.hpp"

class HumanB
{
private:
	Weapon		*_weapon;
	std::string	_name;

public:
	HumanB(std::string name);
	~HumanB();

	Weapon	getWeapon();
	void	setWeapon(Weapon &weapon);
	std::string	getName();
	void		setName(std::string);
	void		attack();
};

#endif