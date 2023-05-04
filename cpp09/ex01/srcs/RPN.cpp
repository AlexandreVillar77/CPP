/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:25:17 by avillar           #+#    #+#             */
/*   Updated: 2023/05/04 14:35:14 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

RPN::RPN(/* args */)
{
}

RPN::~RPN()
{
}

RPN::RPN(const RPN &p)
{
	*this = p;
}

void RPN::operator=(const RPN &p)
{
	_stack = p._stack;
}

void	RPN::push(int n)
{
	_stack.push(n);
}

void	RPN::pop()
{
	if (_stack.size() > 0)
		_stack.pop();
}

void	RPN::add()
{
	int a = 0;
	int b = 0;

	if (_stack.size() > 1)
	{
		a = _stack.top();
		_stack.pop();
		b = _stack.top();
		_stack.pop();
		_stack.push(a + b);
	}
	else
		throw RPN::wrongSize();
}

void	RPN::sub()
{
	int a = 0;
	int b = 0;

	if (_stack.size() > 1)
	{
		a = _stack.top();
		_stack.pop();
		b = _stack.top();
		_stack.pop();
		_stack.push(b - a);
	}
	else
		throw RPN::wrongSize();
}

void	RPN::mul()
{
	int a = 0;
	int b = 0;

	if (_stack.size() > 1)
	{
		a = _stack.top();
		_stack.pop();
		b = _stack.top();
		_stack.pop();
		_stack.push(a * b);
	}
	else
		throw RPN::wrongSize();
}

void	RPN::div()
{
	int a = 0;
	int b = 0;

	if (_stack.size() > 1)
	{
		a = _stack.top();
		_stack.pop();
		b = _stack.top();
		_stack.pop();
		if (a == 0 || b == 0)
			_stack.push(0);
		else
			_stack.push(b / a);
	}
	else
		throw RPN::wrongSize();
}

const char * RPN::wrongSize::what() const throw()
{
	return ("Error");
}

int		RPN::check()
{
	if (_stack.size() == 1)
		throw RPN::wrongSize();
	return (0);
}

int	RPN::gettop()
{
	return (_stack.top());
}

void	RPN::print()
{
	if (_stack.size() > 0)
		std::cout << _stack.top() << std::endl;
}
