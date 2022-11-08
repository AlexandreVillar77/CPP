/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:56:18 by avillar           #+#    #+#             */
/*   Updated: 2022/11/08 15:48:30 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

 Zombie* newZombie( std::string name )
 {
	Zombie	*zombie = new Zombie();

	zombie->setName(name);
	std::cout << name << ": has been created" << std::endl;
	return (zombie);
 }