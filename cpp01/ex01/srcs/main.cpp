/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:55:28 by avillar           #+#    #+#             */
/*   Updated: 2022/11/08 16:08:11 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(int argc, char **argv)
{
	int	i;
	Zombie	*zHorde;

	if (argc < 2 || argc > 3)
	{
		std::cout << "Enter the number of Zombie you want, and the name" << std::endl;
		return (1);
	}
	i = std::atoi(argv[1]);
	zHorde = zombieHorde(i, argv[2]);
	for (int j = 0; j < i; j++)
	{
		zHorde[j].announce();
	}
	delete[] zHorde;
	return (0);
}