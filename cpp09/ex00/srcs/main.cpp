/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:39:26 by avillar           #+#    #+#             */
/*   Updated: 2023/05/04 16:39:44 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"


int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./bitcoin [file]" << std::endl;
		return (1);
	}
	(void)av;
	BitcoinExchange b;
	b.Parsel1();
	b.printline();
	/*try
	{
		BitcoinExchange b(av[1]);
		b.run();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}*/
	return (0);
}
