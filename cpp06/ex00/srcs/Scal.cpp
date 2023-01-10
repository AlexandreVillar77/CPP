/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scal.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:47:38 by avillar           #+#    #+#             */
/*   Updated: 2023/01/10 14:39:42 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Scal.hpp"

Scal::Scal(/* args */)
{
}

Scal::Scal(char *arg) : _arg(arg), _strarg(arg), _Otype("NULL")
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
	int		i = 0;
	int		dot = 0;

	if (_strarg[0] == '-' || _strarg[0] == '+')
		i++;
	while (_strarg[i])
	{
		if ((_strarg[i] < '0' || _strarg[i] > '9'))
		{
				if (_strarg[i] != '.' &&  _strarg[i] != 'f')
				{
					if (i < _strarg.length() -1 && _strarg[i] == 'f')
						throw WrongArgumentException();
					else if (_strarg[])
				}
		}
		i++;
	}
}

void	Scal::CheckArg()
{
	if (_strarg.length() == 1 && (_strarg[0] < 31 || _strarg[0] > 126))
		throw WrongArgumentException();
	if (_strarg.length() >= 3 && _strarg.length() <= 5)
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
		else
			throw WrongArgumentException();
	}
}

void	Scal::CheckChar()
{
	if (_strarg.length() == 1)
	{
		if (_strarg[0] > '0' && _strarg[0] < '9')
			throw notACharException();
		else if (_strarg[0] > 31 && _strarg[0] < 127)
		{
			_Otype = "char";
		}
	}
}

void	Scal::CheckDouble()
{
	if (_strarg.length() > 1)
	{
		if (_strarg.find('.') > 0)
		{
			if (_strarg.find('f') == _strarg.length() - 1)
				throw notADoubleException();
			else
				_Otype = "double";
		}
	}
}

const char*	Scal::notAnIntException::what() const throw()
{
	return ("impossible");
}

const char* Scal::notACharException::what() const throw()
{
	return ("impossible");
}

const char* Scal::notADoubleException::what() const throw()
{
	return ("impossible");
}

const char* Scal::notAFloatException::what() const throw()
{
	return ("impossible");
}

const char* Scal::impossibleConvException::what() const throw()
{
	return ("impossible");
}

const char * Scal::notPrintableException::what() const throw()
{
	return ("Non displayable");
}

const char * Scal::WrongArgumentException::what() const throw()
{
	return ("Wrong argument");
}