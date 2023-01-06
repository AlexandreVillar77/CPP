/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:22:13 by avillar           #+#    #+#             */
/*   Updated: 2023/01/06 09:51:55 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# include <iostream>
# include <stdexcept>
# include <string>

class Form;

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;

public:
	Bureaucrat(/* args */);
	Bureaucrat(std::string const & name, int grade);
	Bureaucrat(Bureaucrat const & src);

	~Bureaucrat();

	Bureaucrat & operator=(Bureaucrat const & og);

	std::string const & getName() const;
	int getGrade() const;
	void setGrade(int grade);
	void incrementGrade();
	void decrementGrade();
	void signForm(Form &F);

	void	executeForm(Form const & form);

	class GradeTooLowException: public std::exception
	{
		virtual const char*	what() const throw();
	};

	class GradeTooHighException: public std::exception
	{
		virtual const char*	what() const throw();
	};
};

std::ostream	&operator<<(std::ostream& os, const Bureaucrat &src);

#endif