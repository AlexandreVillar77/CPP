/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:43:33 by avillar           #+#    #+#             */
/*   Updated: 2023/05/15 17:07:05 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <list>
# include <string>
# include <sstream>
# include <iterator>
# include <cstdlib>

class BitcoinExchange
{
private:
	std::list<std::list <long double> > _list1;
	std::list<std::list <long double> > _list2;
	long double _max;
	long double _min;
	char * _file;

public:
	BitcoinExchange(/* args */);
	BitcoinExchange(char * fichier);
	~BitcoinExchange();

	BitcoinExchange(const BitcoinExchange &p);
	void operator=(const BitcoinExchange &p);

	void	parsel2();
	void	Parsel1();
	int 	compare();
	void	printlinel1();
	void	printlinel2();
	int		check(std::string ligne);
	std::list<long double>::iterator	find(std::list<long double> list);

	void run();

	class Error: public std::exception
	{
		virtual const char* what() const throw();
	};
};

#endif
