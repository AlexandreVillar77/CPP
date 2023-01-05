/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:52:13 by avillar           #+#    #+#             */
/*   Updated: 2023/01/05 11:13:41 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;

public:
	Form(/* args */);
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(Form & src);

	~Form();


	Form	&	operator=(Form const & og);

	const std::string getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(Bureaucrat &b);


	class GradeTooLowException: public std::exception
	{
		virtual const char*	what() const throw();
	};

	class GradeTooHighException: public std::exception
	{
		virtual const char*	what() const throw();
	};
};

std::ostream	&operator<<(std::ostream& os, const Form &src);


#endif