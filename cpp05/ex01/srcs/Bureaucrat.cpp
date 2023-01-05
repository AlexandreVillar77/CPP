/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:22:59 by avillar           #+#    #+#             */
/*   Updated: 2023/01/05 11:14:26 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

Bureaucrat::Bureaucrat(/* args */) : _name("default"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat constructor called" << std::endl;

	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName())
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	operator=(src);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat default destructor called" << std::endl;
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & og)
{
	std::cout << "Bureaucrat assignation operator called" << std::endl;
	this->setGrade(og.getGrade());
	return *this;
}

std::ostream & operator<<(std::ostream & os , Bureaucrat const & src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return os;
}

std::string const & Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::incrementGrade()
{
	this->_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::decrementGrade()
{
	this->_grade++;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(Form &F)
{
	if (F.getIsSigned())
		std::cout << this->getName() << " signed " << F.getName() << std::endl;
	else
		std::cout << this->getName() << " couldn't sign " << F.getName() << " because grade too low" << std::endl;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}
