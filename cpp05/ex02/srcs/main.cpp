/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:21:43 by avillar           #+#    #+#             */
/*   Updated: 2023/01/06 09:56:30 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int	main()
{
	std::cout << "\nTEST 1 all good + shrub form:" << std::endl;
	try {
		Bureaucrat	b1("Bob", 1);
		ShrubberyCreationForm		f1("TREES");
		b1.signForm(f1);
		f1.beSigned(b1);
		f1.execute(b1);
	}
	catch (std::exception & e) {
		std::cout << "error : " << e.what() << std::endl;
	}


	std::cout << "\nTEST 2 grade to low to exec + shrub form:" << std::endl;
	try {
		Bureaucrat	b1("Bob", 140);
		ShrubberyCreationForm		f1("toLow");
		b1.signForm(f1);
		f1.beSigned(b1);
		b1.executeForm(f1);
		f1.execute(b1);
	}
	catch (std::exception & e) {
		std::cout << "error : " << e.what() << std::endl;
	}

	std::cout << "\nTEST 3 grade to low to sign + shrub form:" << std::endl;
	try {
		Bureaucrat	b1("Bob", 146);
		ShrubberyCreationForm		f1("toLow");
		b1.signForm(f1);
		f1.beSigned(b1);
		b1.executeForm(f1);
		f1.execute(b1);
	}
	catch (std::exception & e) {
		std::cout << "error : " << e.what() << std::endl;
	}

	std::cout << "\nTEST 4 grade = to reauired to sign form:" << std::endl;
	try {
		Bureaucrat	b1("Bob", 25);
		PresidentialPardonForm		f1("equal");
		b1.signForm(f1);
		f1.beSigned(b1);
		b1.executeForm(f1);
		f1.execute(b1);
	}
	catch (std::exception & e) {
		std::cout << "error : " << e.what() << std::endl;
	}

	std::cout << "\nTEST 5 form sign executed by other :" << std::endl;
	try {
		Bureaucrat	b1("Bob", 25);
		Bureaucrat	b2("PA", 5);
		PresidentialPardonForm		f1("equal");
		b1.signForm(f1);
		f1.beSigned(b1);
		b2.executeForm(f1);
		f1.execute(b2);
	}
	catch (std::exception & e) {
		std::cout << "error : " << e.what() << std::endl;
	}
}