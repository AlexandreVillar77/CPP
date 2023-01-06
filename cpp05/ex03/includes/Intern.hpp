/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 09:58:31 by avillar           #+#    #+#             */
/*   Updated: 2023/01/06 12:30:57 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

class Form;

class Intern
{
private:
	/* data */

public:
	Intern(/* args */);
	~Intern();

	Intern(Intern const & src);
	Intern & operator=(Intern const & og);

	Form * makeForm(std::string name, std::string target);

	class FormNotFoundException: public std::exception
	{
		virtual const char*	what() const throw();
	};
};

#endif