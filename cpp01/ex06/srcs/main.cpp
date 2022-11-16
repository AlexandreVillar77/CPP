/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:50:49 by avillar           #+#    #+#             */
/*   Updated: 2022/11/16 10:43:37 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::system("clear");
		std::cout << "Use : " << std::endl << "./HarlFilter <level>" << std::endl << std::endl
			<< "level can be :" << std::endl 
			<< "1 : DEBUG" << std::endl
			<< "2 : INFO" << std::endl
			<< "3 : WARNING" << std::endl
			<< "4 : ERROR" << std::endl;
		return (1);
	}
	Harl test;

	std::string level = argv[1];
	test.complain(level);
	return (0);
}