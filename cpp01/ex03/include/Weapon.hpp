/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:39:24 by avillar           #+#    #+#             */
/*   Updated: 2022/11/14 12:40:37 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

# include <iostream>

class Weapon
{
private:
	std::string	_name;

public:
	Weapon(std::string name);
	~Weapon();

	std::string	getType();
	void		setType(std::string name);
};

#endif