/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:43:33 by avillar           #+#    #+#             */
/*   Updated: 2023/05/04 16:41:22 by avillar          ###   ########.fr       */
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

class BitcoinExchange
{
private:
	std::list<std::list <long double> > _list1;
	std::list<std::list <long double> > _list2;

public:
	BitcoinExchange(/* args */);
	~BitcoinExchange();

	BitcoinExchange(const BitcoinExchange &p);
	void operator=(const BitcoinExchange &p);

	void	Parsel1();
	int 	compare();
	void	printline();

	void run();
};

#endif
