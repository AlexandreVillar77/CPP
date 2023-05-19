/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:39:26 by avillar           #+#    #+#             */
/*   Updated: 2023/05/15 18:06:58 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		if (ac > 2)
			std::cout << "Error: too many arguments." << std::endl;
		else
			std::cout << "Error: could not open file." << std::endl;
		std::cout << "Usage: ./bitcoin [file]" << std::endl;
		return (1);
	}

	try
	{
		BitcoinExchange b(av[1]);

		b.Parsel1();
		b.parsel2();
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
		return (1);
	}
	return (0);
}
