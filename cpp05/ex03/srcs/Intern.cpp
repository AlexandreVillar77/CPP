/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 09:58:52 by avillar           #+#    #+#             */
/*   Updated: 2023/01/17 14:16:29 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include "../includes/Form.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

Intern::Intern(/* args */)
{
	//std::cout << "Intern default constructor called" << std::endl;
}

Intern::~Intern()
{
	//std::cout << "Intern default destructor called" << std::endl;
}

Intern::Intern(Intern const & src)
{
	//std::cout << "Intern copy constructor called" << std::endl;
	operator=(src);
}

Intern & Intern::operator=(Intern const & og)
{
	//std::cout << "Intern assignation operator called" << std::endl;
	(void)og;
	return *this;
}

Form * Intern::makeForm(std::string name, std::string target)
{
	std::string tab[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	for (int i = 0; i < 3; i++)
	{
		if (name.compare(tab[i]) == 0)
		{
			switch (i)
			{
				case 0:
					std::cout << "Intern creates RobotomyRequestForm" << std::endl;
					return new RobotomyRequestForm(target);
				case 1:
					std::cout << "Intern creates PresidentialPardonForm" << std::endl;
					return new PresidentialPardonForm(target);
				case 2:
					std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
					return new ShrubberyCreationForm(target);
				break;
			}
		}
	}
	throw FormNotFoundException();
	return NULL;
}

const char * Intern::FormNotFoundException::what() const throw()
{
	return "Form not found";
}
