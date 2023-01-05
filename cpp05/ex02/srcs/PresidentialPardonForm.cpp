/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:24:55 by avillar           #+#    #+#             */
/*   Updated: 2023/01/05 16:00:44 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->setTarget(target);
	//std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute())
{
	this->setTarget(src.getTarget());
	//std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & og)
{
	//std::cout << "PresidentialPardonForm Assignation operator called" << std::endl;
	this->setTarget(og.getTarget());
	this->setSigned(og.getIsSigned());
	return *this;
}

void	PresidentialPardonForm::action() const
{
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	//std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}