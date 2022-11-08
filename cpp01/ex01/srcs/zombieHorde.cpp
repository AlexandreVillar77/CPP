/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:53:18 by avillar           #+#    #+#             */
/*   Updated: 2022/11/08 16:08:47 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zHorde[i].setName(name);
		std::cout << name << " " << i + 1 << " has been created" << std::endl;
	}
	return (zHorde);
}