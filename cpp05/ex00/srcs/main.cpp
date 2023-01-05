/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:21:43 by avillar           #+#    #+#             */
/*   Updated: 2022/12/15 13:20:21 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int	main()
{
	std::cout << "TEST 1 :" << std::endl;
	try {
		Bureaucrat b1("Bob", 0);
	}
	catch (std::exception & e) {
		std::cout << "error : " << e.what() << std::endl;
	}

	std::cout << "\nTEST 2 :" << std::endl;

	try {
		Bureaucrat b2("Bob", 151);
	}
	catch (std::exception & e) {
		std::cout << "error : " << e.what() << std::endl;
	}

	std::cout << "\nTEST 3 :" << std::endl;

	try {
		Bureaucrat b3("Bob", 1);
		std::cout << b3;
		b3.incrementGrade();
		std::cout << b3;
		b3.incrementGrade();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTEST 4 :" << std::endl;

	try {
		Bureaucrat b4("Bob", 150);
		std::cout << b4;
		b4.decrementGrade();
		std::cout << b4;
		b4.decrementGrade();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}