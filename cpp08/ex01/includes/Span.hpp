/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 09:47:11 by avillar           #+#    #+#             */
/*   Updated: 2023/01/24 13:48:44 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <exception>
# include <iostream>
# include <vector>
# include <iterator>
# include <cstdlib>

class Span
{
private:
	std::vector <int> *_v;
	unsigned int _n;

public:
	Span(unsigned int n);
	Span(Span const & copy);
	~Span();

	Span & operator=(Span const & rhs);
	void addNumber(int x);
	int shortestSpan();
	int longestSpan();

	std::vector<int>::iterator begin();
	std::vector<int>::iterator end();
	void show();

	void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);






	class TooManyNumbers : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class CannotFindSpan : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

#endif