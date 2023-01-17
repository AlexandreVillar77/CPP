/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:25:27 by avillar           #+#    #+#             */
/*   Updated: 2023/01/16 12:06:33 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->setTarget(target);
	//std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute())
{
	this->setTarget(src.getTarget());
	//std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & og)
{
	//std::cout << "RobotomyRequestForm Assignation operator called" << std::endl;
	this->setTarget(og.getTarget());
	this->setSigned(og.getIsSigned());
	return *this;
}

void	RobotomyRequestForm::action() const
{
	srand(time(NULL)); // reset rand
	std::cout << "BRRR        BRRR           BRRR         BRRR " << std::endl;
	std::cout << "		BRRR         BRRR           BRRR        BRRR " << std::endl;
	std::cout << "BRRR        BRRR           BRRR         BRRR " << std::endl;
	std::cout << "		BRRR         BRRR           BRRR        BRRR " << std::endl;
	std::cout << "BRRR        BRRR           BRRR         BRRR " << std::endl;
	std::cout << "		BRRR         BRRR           BRRR        BRRR " << std::endl;
	std::cout << "BRRR        BRRR           BRRR         BRRR " << std::endl;
	std::cout << "		BRRR         BRRR           BRRR        BRRR " << std::endl;
	std::cout << "BRRR        BRRR           BRRR         BRRR " << std::endl;
	std::cout << "		BRRR         BRRR           BRRR        BRRR " << std::endl;
	std::cout << "BRRR        BRRR           BRRR         BRRR \n\n" << std::endl;
	if (rand() < RAND_MAX / 2)
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->getTarget() << " robotomization failed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	//std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}