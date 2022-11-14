/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:29:43 by avillar           #+#    #+#             */
/*   Updated: 2022/11/14 12:39:22 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
# define __HUMANA_HPP__

#include "./Weapon.hpp"

class HumanA
{
private:
	Weapon		&_weapon;
	std::string	_name;

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	Weapon	getWeapon();
	void	setWeapon(Weapon weapon);
	std::string	getName();
	void		setName(std::string name);
	void		attack();
};


#endif