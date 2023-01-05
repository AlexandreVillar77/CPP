/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:47:02 by avillar           #+#    #+#             */
/*   Updated: 2023/01/05 11:15:47 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"

Form::Form(/* args */) : _name("default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "Form Constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form &og) : _name(og.getName()), _isSigned(og.getIsSigned()), _gradeToSign(og.getGradeToSign()), _gradeToExecute(og.getGradeToExecute())
{
	std::cout << "Form Copy constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

Form	&	Form::operator=(Form const & og)
{
	if (this != &og)
	{
		this->_isSigned = og._isSigned;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream& os, const Form &src)
{
	os << "Form Name: " << src.getName() << std::endl;
	os << "Form Grade to Sign: " << src.getGradeToSign() << std::endl;
	os << "Form Grade to Execute: " << src.getGradeToExecute() << std::endl;
	os << "Form is Signed: " << src.getIsSigned() << std::endl;
	return os;
}

const std::string Form::getName() const
{
	return (this->_name);
}

int	Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}
int	Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

bool	Form::getIsSigned() const
{
	return (this->_isSigned);
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else
		this->_isSigned = true;
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}