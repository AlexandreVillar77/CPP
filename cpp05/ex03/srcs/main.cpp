/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:21:43 by avillar           #+#    #+#             */
/*   Updated: 2023/01/09 11:04:50 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

int	main()
{
	std::cout << "\nTEST 1 shrub form:" << std::endl;
	try {
		Bureaucrat	b1("Bob", 1);
		Intern		I1;
		
		Form * f1 = I1.makeForm("shrubbery creation", "home");
		b1.signForm(*f1);
		f1->beSigned(b1);
		b1.executeForm(*f1);
		f1->execute(b1);
		delete f1;
	}
	catch (std::exception & e) {
		std::cout << "error : " << e.what() << std::endl;
	}

	std::cout << "\nTEST 2 form not found:" << std::endl;
	try {
		Bureaucrat	b1("Bob", 1);
		Intern		I1;
		
		Form * f1 = I1.makeForm("unknown form", "home");
		b1.signForm(*f1);
		f1->beSigned(b1);
		b1.executeForm(*f1);
		f1->execute(b1);
		delete f1;
	}
	catch (std::exception & e) {
		std::cout << "error : " << e.what() << std::endl;
	}
}