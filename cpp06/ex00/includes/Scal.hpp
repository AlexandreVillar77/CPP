/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scal.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:47:17 by avillar           #+#    #+#             */
/*   Updated: 2023/01/10 13:49:46 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAL_HPP
# define SCAL_HPP

# include <iostream>
# include <stdexcept>

class Scal
{
private:
	char*	_arg;
	std::string	_strarg;
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

	class impossibleConvException: std::exception
	{
		virtual const char* what() const throw();
	};

	class WrongArgumentException: std::exception
	{
		virtual const char* what() const throw();
	};
};

#endif