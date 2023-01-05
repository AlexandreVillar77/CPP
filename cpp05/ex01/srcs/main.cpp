/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:21:43 by avillar           #+#    #+#             */
/*   Updated: 2023/01/05 13:53:47 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int	main()
{
	std::cout << "TEST 1 all good:" << std::endl;
	try {
		Bureaucrat	b1("Bob", 1);
		Form		f1("classic", 100, 50);
		b1.signForm(f1);
		f1.beSigned(b1);
	}
	catch (std::exception & e) {
		std::cout << "error : " << e.what() << std::endl;
	}

	std::cout << "\nTEST 2 Grade too low to sign:" << std::endl;
	try {
		Bureaucrat	b1("Bob", 150);
		Form		f1("classic", 100, 50);
		b1.signForm(f1);
		f1.beSigned(b1);
	}
	catch (std::exception & e) {
		std::cout << "error : " << e.what() << std::endl;
	}

	std::cout << "\nTEST 3 form creation grade to low:" << std::endl;
	try {
		Bureaucrat	b1("Bob", 150);
		Form		f1("classic", 151, 50);
		b1.signForm(f1);
		f1.beSigned(b1);
	}
	catch (std::exception & e) {
		std::cout << "error : " << e.what() << std::endl;
	}


	std::cout << "\nTEST 4 Form creation grade to high:" << std::endl;
	try {
		Bureaucrat	b1("Bob", 150);
		Form		f1("classic", 100, 0);
		b1.signForm(f1);
		f1.beSigned(b1);
	}
	catch (std::exception & e) {
		std::cout << "error : " << e.what() << std::endl;
	}
}