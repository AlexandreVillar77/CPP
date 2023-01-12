/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scal.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:47:17 by avillar           #+#    #+#             */
/*   Updated: 2023/01/12 15:59:07 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAL_HPP
# define SCAL_HPP

# include <iostream>
# include <stdexcept>
# include <string>
# include <iomanip>
# include <cstdlib>
# include <cerrno>
# include <climits>
# include <cfloat>
# include <cmath>

class Scal
{
private:
	char*	_arg;
	std::string	_strarg;
	int		_dot;
	std::string _Otype;

public:
	Scal(/* args */);
	Scal(char* arg);

	Scal(Scal &og);
	~Scal();

	Scal &operator=(Scal const &og);

	void	setStrarg(std::string strarg);
	void	setArg(char* arg);
	void	setOtype(std::string type);
	std::string getOtype();
	std::string getStrarg();
	char*	getArg();

	void	CheckArg();
	int		ParseArg();

	void	CheckInt();
	void	CheckChar();
	void	CheckFloat();
	void	CheckDouble();

	void	ParseInt();
	void	ParseChar();
	void	ParseFloat();
	void	ParseDouble();

	void	Display();
	void	DisplayInt();
	void	DisplayChar();
	void	DisplayFloat();
	void	DisplayDouble();

	class notAnIntException: public std::exception
	{
		virtual const char*	what() const throw();
	};

	class notACharException: public std::exception
	{
		virtual const char*	what() const throw();
	};

	class notAFloatException: public std::exception
	{
		virtual const char*	what() const throw();
	};

	class notADoubleException: public std::exception
	{
		virtual const char*	what() const throw();
	};

	class notPrintableException: public std::exception
	{
		virtual const char*	what() const throw();
	};

	class impossibleConvException: public std::exception
	{
		virtual const char* what() const throw();
	};

	class wrongArgumentException: public std::exception
	{
		virtual const char* what() const throw();
	};
};

#endif