/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 09:47:02 by avillar           #+#    #+#             */
/*   Updated: 2023/01/24 14:33:19 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span(unsigned int n) : _n(n)
{
	_v = new std::vector<int>;
	std::cout << "Defautl constructor called" << std::endl;
}

Span::~Span()
{
	delete _v;
	std::cout << "Destructor called" << std::endl;
}

Span::Span(Span const & copy) : _n(copy._n)
{
	operator=(copy);
	std::cout << "Copy constructor called" << std::endl;
}

Span & Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
		_n = rhs._n;
		if (_v)
			delete _v;
		_v = new std::vector<int>(rhs._n);
		for (unsigned int i = 0; i < _n; i++)
			_v->at(i) = rhs._v->at(i);
	}
	return (*this);
}

void	Span::addNumber(int x)
{
	if (_v->size() < _n)
		_v->push_back(x);
	else
		throw TooManyNumbers();
}

std::vector<int>::iterator	Span::begin()
{
	return _v->begin();
}

std::vector<int>::iterator	Span::end()
{
	return _v->end();
}

int		Span::longestSpan()
{
	std::vector<int>::iterator it = _v->begin();
	int keep = 0;
	if (_v->size() < 2)
		throw CannotFindSpan();
	while (it + 1 != _v->end())
	{
		if (std::abs(*it - *(it + 1)) > keep)
			keep = std::abs(*it - *(it + 1));
		it++;
	}
	return keep;
}

int		Span::shortestSpan()
{
	std::vector<int>::iterator it = _v->begin();
	int keep = 2147483647;
	if (_v->size() < 2)
		throw CannotFindSpan();
	while (it + 1 != _v->end())
	{
		if (std::abs(*it - *(it + 1)) < keep)
			keep = std::abs(*it - *(it + 1));
		it++;
	}
	return keep;
}

void	Span::show()
{
	std::vector<int>::iterator it = _v->begin();
	while (it != _v->end())
	{
		std::cout << *it << std::endl;
		it++;
	}
}

int	add(unsigned int x)
{
	return (rand() % x);
}

void	Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_v->size() + (end - begin) > _n)
		throw TooManyNumbers();
	_v->insert(this->end(), begin, end);
}

const char* Span::TooManyNumbers::what() const throw()
{
	return ("Too many numbers");
}

const char* Span::CannotFindSpan::what() const throw()
{
	return ("Cannot find span");
}