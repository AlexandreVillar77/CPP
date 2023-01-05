/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:25:16 by avillar           #+#    #+#             */
/*   Updated: 2023/01/05 16:00:59 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->setTarget(target);
	//std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute())
{
	this->setTarget(src.getTarget());
	//std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & og)
{
	//std::cout << "ShrubberyCreationForm assignation operator called" << std::endl;
	this->setTarget(og.getTarget());
	this->setSigned(og.getIsSigned());
	return *this;
}

void	ShrubberyCreationForm::action() const
{
	std::ofstream file;

	std::string name = this->getTarget().append("_shrubbery");
	file.open(name.c_str(), std::ios::out | std::ios::trunc);
	file << "              v .   ._, |_  .," << std::endl;
	file << "           `-._\\/  .  \\ /    |/_" << std::endl;
	file << "               \\  _\\, y | \\//" << std::endl;
	file << "         _\\_.___\\, \\/ -.\\||" << std::endl;
	file << "           `7-,--.`._||  / / ," << std::endl;
	file << "           /'     `-. `./ / |/_.'" << std::endl;
	file << "                     |    |//" << std::endl;
	file << "                     |_    /" << std::endl;
	file << "                     |-   |" << std::endl;
	file << "                     |   =|" << std::endl;
	file << "                     |    |" << std::endl;
	file << "--------------------/ ,  . \\--------._" << std::endl;

	file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	//std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}