/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:47:43 by avillar           #+#    #+#             */
/*   Updated: 2023/05/16 15:27:54 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Usage: ./PmergeMe [3 4 5 0...]" << std::endl;
		return 1;
	}
	PmergeMe p(argv);

	std::cout << "Before sort : ";
	p.printV();
	p.sortV();
	std::cout << "After sort : ";
	p.printV();
	p.printTime();

	return 0;
}

