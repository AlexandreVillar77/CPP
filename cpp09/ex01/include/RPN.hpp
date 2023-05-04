/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:25:32 by avillar           #+#    #+#             */
/*   Updated: 2023/05/04 14:26:49 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>

class RPN
{
private:
	std::stack<int> _stack;

public:

	RPN(const RPN &p);
	void operator=(const RPN &p);

	int	check();
	void push(int n);
	void pop();
	void add();
	void sub();
	void mul();
	void div();
	void print();
	int	gettop();

	class wrongSize: public std::exception
	{
		virtual const char* what() const throw();
	};


	RPN(/* args */);
	~RPN();
};

#endif
