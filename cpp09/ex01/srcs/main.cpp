/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:24:37 by avillar           #+#    #+#             */
/*   Updated: 2023/05/04 14:57:42 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

void	read(char c, RPN &rpn)
{
	if (c == ' ')
		return ;
	if (c == '+')
		rpn.add();
	else if (c == '-')
		rpn.sub();
	else if (c == '*')
		rpn.mul();
	else if (c == '/')
		rpn.div();
	else if (c < '0' || c > '9')
		throw RPN::wrongSize();
	else
		rpn.push(c - '0');
}

int main(int ac, char **av)
{
	std::string s;

	if (ac != 2)
	{
		std::cout << "Usage: ./rpn \"1 2 + 3 *\"" << std::endl;
		return 1;
	}
	s.assign(av[1]);
	RPN rpn;
	try
	{
		for (unsigned long i = 0; i < s.length(); i++)
			read(s[i], rpn);
		int o = rpn.gettop();
		std::cout << o << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (1);
	}
	return 0;
}
