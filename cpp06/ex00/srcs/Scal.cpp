/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scal.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:47:38 by avillar           #+#    #+#             */
/*   Updated: 2023/01/16 09:57:19 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Scal.hpp"

Scal::Scal(/* args */)
{
}

Scal::Scal(char *arg) : _arg(arg), _strarg(arg), _dot(0),  _Otype("NULL")
{
}

Scal::~Scal()
{
}

Scal::Scal(Scal &og)
{
	*this = og;
}

Scal &Scal::operator=(Scal const &og)
{
	if (this != &og)
	{
		this->_arg = og._arg;
		this->_strarg = og._strarg;
	}
	return (*this);
}

void	Scal::setOtype(std::string type)
{
	this->_Otype = type;
}

std::string Scal::getOtype()
{
	return (_Otype);
}

void	Scal::setStrarg(std::string strarg)
{
	this->_strarg = strarg;
}

void	Scal::setArg(char* arg)
{
	this->_arg = arg;
}

char * Scal::getArg()
{
	return (this->_arg);
}

std::string Scal::getStrarg()
{
	return (this->_strarg);
}

int	Scal::ParseArg()
{
	unsigned long		i = 0;

	if (_strarg[0] == '-' || _strarg[0] == '+')
		i++;
	while (_strarg[i])
	{
		if ((_strarg[i] < '0' || _strarg[i] > '9'))
		{
			if (_strarg[i] == '.' ||  _strarg[i] == 'f')
			{
				if (i < _strarg.length() - 1 && _strarg[i] == 'f')
					return (1);
				else if (_strarg[i] == 'f' && i > 0 && _strarg[i - 1] == '.')
					return (1);
				else if (_strarg[i] == '.' && _dot < 1)
				{
					if (i == 0 || (i > 0 && (_strarg[i - 1] < '0' || _strarg[i - 1] > '9')))
						return (1);
					if (_strarg.length() - 1 == i)
						return (1);
					else
						_dot++;
				}
				else if (_strarg[i] == '.' && _dot != 0)
					return (1);
			}
			if (_strarg[i] != 'f' && _strarg[i] != '.')
				return (1);
		}
		i++;
	}
	return (0);
}

void	Scal::CheckArg()
{
	if (_strarg.length() == 1 && (_strarg[0] < 31 || _strarg[0] > 126))
		throw Scal::wrongArgumentException();
	else if (_strarg.length() >= 3 && _strarg.length() <= 5)
	{
		if (_strarg.compare("nan") == 0)
			_Otype = "double";
		else if (_strarg.compare("-inf") == 0)
			_Otype = "double";
		else if (_strarg.compare("+inf") == 0)
			_Otype = "double";
		else if (_strarg.compare("nanf") == 0)
			_Otype = "float";
		else if (_strarg.compare("-inff") == 0)
			_Otype = "float";
		else if (_strarg.compare("+inff") == 0)
			_Otype = "float";
	}
	if (_Otype.compare("NULL") == 0)
	{
		if (this->ParseArg() == 1 && _strarg.length() > 1)
			throw Scal::wrongArgumentException();
		else
		{
			CheckDouble();
			CheckChar();
		}
	}
	Display();
}

void	Scal::CheckChar()
{
	if (_strarg.length() == 1)
	{
		if (_strarg[0] >= '0' && _strarg[0] <= '9')
			_Otype = "int";
		else if (_strarg[0] > 31 && _strarg[0] < 127)
		{
			_Otype = "char";
		}
	}
}


void	Scal::CheckDouble()
{
	double t = std::strtod(_strarg.c_str(), NULL);
	if (_strarg.length() > 1)
	{
		if (_dot > 0 || (t > 2147483647 || t < -2147483648))
		{
			if (_strarg.find('f') == _strarg.length() - 1)
				_Otype = "float";
			else
				_Otype = "double";
		}
		else if (_strarg.find('f') == _strarg.length() - 1)
			_Otype = "float";
		else
			_Otype = "int";
	}
}

void	Scal::Display()
{
	std::string	tab[4] = {"char", "int", "float", "double"};
	void		(Scal::*f[4])() = {&Scal::DisplayChar, &Scal::DisplayInt, &Scal::DisplayFloat, &Scal::DisplayDouble};

	for (int i = 0; i < 4; i++)
	{
		if (_Otype.compare(tab[i]) == 0)
		{
			(this->*f[i])();
			return ;
		}
	}
	throw Scal::wrongArgumentException();
}

void	Scal::DisplayDouble()
{
	double	d = std::strtod(_strarg.c_str(), NULL);
	if (errno)
		throw Scal::notADoubleException();
	d = static_cast<double>(d);
	long long int	i = static_cast<long long int>(d);
	if (i < 0 || i > 127)
		std::cout << "char: impossible" << std::endl;
	else if (i > 126 || i < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	if (i > 2147483647 || i < -2147483648)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	float	f = std::strtof(_strarg.c_str(), NULL);
	if (errno)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
	(void) f;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

void	Scal::DisplayFloat()
{
	float	f = std::strtof(_strarg.c_str(), NULL);
	if (errno)
		throw Scal::notAFloatException();
	f = static_cast<float>(f);
	long int	i = static_cast<long int>(f);
	if (i < 0 || i > 127)
		std::cout << "char: impossible" << std::endl;
	else if (i > 126 || i < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	if (i > 2147483647 || i < -2147483648)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
}

void	Scal::DisplayInt()
{
	long int	li = atoi(_strarg.c_str());
	if (li > 2147483647 || li < -2147483648)
		throw Scal::notAnIntException();
	int i = static_cast<int>(atoi(_strarg.c_str()));
	if (i > 126 || i < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(i) << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

void	Scal::DisplayChar()
{
	char c = static_cast<char>(_strarg.c_str()[0]);

	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

const char* Scal::notAnIntException::what() const throw()
{
	return ("char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible");
}

const char* Scal::notACharException::what() const throw()
{
	return ("impossible");
}

const char* Scal::notADoubleException::what() const throw()
{
	return ("char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible");
}

const char* Scal::notAFloatException::what() const throw()
{
	return ("char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible");
}

const char* Scal::impossibleConvException::what() const throw()
{
	return ("impossible");
}

const char* Scal::notPrintableException::what() const throw()
{
	return ("Non displayable");
}

const char* Scal::wrongArgumentException::what() const throw()
{
	return ("Error : Wrong argument");
}