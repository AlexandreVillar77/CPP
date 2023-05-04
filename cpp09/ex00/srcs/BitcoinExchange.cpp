/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:43:39 by avillar           #+#    #+#             */
/*   Updated: 2023/05/04 16:49:25 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(/* args */)
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &p)
{
	*this = p;
}

void BitcoinExchange::operator=(const BitcoinExchange &p)
{
	(void)p;
}

void	BitcoinExchange::Parsel1()
{
	std::ifstream fichier("./include/data.csv", std::ios::in);
	if(fichier)
	{
		const char *str;
		std::string ligne;
		long double res;
		char * end;
		while(getline(fichier, ligne))
		{
			std::list<long double> l;
			for (int i = 0; i < 4; i++)
			{
				str = ligne.c_str();
				l.push_back(std::atof(str));
				ligne = ligne.substr(ligne.find('-') + 1);
			}
			ligne = ligne.substr(ligne.find(',') + 1);
			str = ligne.c_str();
			std::cout << str << std::endl;
			std::istringstream iss(&str[0]);
			iss >> res;
			
			std::cout << res << std::endl;
			l.push_back(res);
			std::cout << l.back() << std::endl; 

			l.push_back(std::strtod(str, &end));

			_list1.push_back(l);
		}
		fichier.close();
	}
	else
		std::cerr << "Error" << std::endl;
}

void	BitcoinExchange::printline()
{
	/*for (std::list<std::list<long double> >::iterator it = _list1.begin(); it != _list1.end(); it++)
	{
		for (std::list<long double>::iterator it2 = (*it).begin(); it2 != (*it).end(); it2++)
		{
			std::cout << *it2 << " ";
		}
		std::cout << std::endl;
	}*/
}
