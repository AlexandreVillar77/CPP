/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 09:46:51 by avillar           #+#    #+#             */
/*   Updated: 2023/01/24 14:34:15 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int	main()
{
	srand(time(NULL));

	Span sp = Span(6);

	std::cout << "first draw" << std::endl;
	std::vector<int> tmp;
	for (int i = 0; i < 6; i++)
		tmp.push_back(rand() % 100);
	sp.addRange(tmp.begin(), tmp.end());
	sp.show();
	catch (std::exception & e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	try {
		std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}

	try {
		std::cout << "longest span : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	/*
	std::cout << "\n----------------\n" << std::endl;
	std::cout << "Second draw" << std::endl;
	sp.addRange(sp.begin(), sp.end());
	sp.show();

	try {
		std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}

	try {
		std::cout << "longest span : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}*/

	return (0);
}