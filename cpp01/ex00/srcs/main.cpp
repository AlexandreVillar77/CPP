/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:55:28 by avillar           #+#    #+#             */
/*   Updated: 2022/11/08 15:38:21 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main()
{
	Zombie	*zombie;

	zombie = newZombie("lol");
	zombie->announce();
	randomChump("troll");
	delete zombie;
	return (0);
}