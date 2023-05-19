/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:43:39 by avillar           #+#    #+#             */
/*   Updated: 2023/05/15 18:07:44 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(/* args */)
{
	_file = NULL;
	_max = 0;
	_min = 0;
}

BitcoinExchange::BitcoinExchange(char * fichier) : _max(0), _min(0), _file(fichier)
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
	_file = p._file;
	_list1 = p._list1;
	_list2 = p._list2;
	_max = p._max;
	_min = p._min;
}

int	BitcoinExchange::check(std::string ligne)
{
	int		i = 0;
	int		pt = 0;

	i = 0;
	pt = 0;
	while (ligne[i] && i < 10)
	{
		if (i != 0 && ligne[i] == '-')
		{
			i++;
			pt++;
		}
		if (pt > 2)
			return (1);
		if ((ligne[i] < '0' || ligne[i] > '9'))
		{
			return (1);
		}
		i++;
	}
	if (!ligne[i])
	return (1);
	pt = 0;
	if (ligne[i] != ' ')
		return (1);
	i++;
	if (ligne[i] != '|')
		return (1);
	i++;
	if (ligne[i] != ' ')
		return (1);
	i++;
	if (ligne[i] == '-')
		return (2);
	while (ligne[i])
	{
		if (ligne[i] == '.')
		{
			i++;
			pt++;
		}
		if (pt > 1)
			return (1);
		if ((ligne[i] < '0' || ligne[i] > '9'))
		{
			return (1);
		}
		i++;
	}
	return (0);
}

std::list<long double>::iterator BitcoinExchange::find(std::list<long double> list)
{
	std::list<long double>::iterator last = list.begin();
	for (std::list<std::list<long double> >::iterator it = _list1.begin(); it != _list1.end(); it++)
	{
		std::list<long double>::iterator i = list.begin();
		std::list<long double>::iterator it2 = (*it).begin();
		if (*it2 == *i)
		{
			it2++;
			i++;
			if (*it2 == *i)
			{
				it2++;
				i++;
				if (*it2 == *i)
				{
					return ((*it).begin());
				}
			}
		}
		if (*it2 > *i)
			return (last);
		last = (*it).begin();
	}
	return (last);
}

void	BitcoinExchange::parsel2()
{
	std::ifstream file(_file, std::ios::in);
	if (!file)
	{
		std::cout << "Error: " << _file << " : could not open file." << std::endl;
		throw Error();
	}
	std::string ligne;
	getline(file, ligne);
	if ((ligne.compare("date | value")))
	{
		std::cout << "Error: wrong format in : " << _file << std::endl;
		file.close();
		throw Error();
	}
	while(getline(file, ligne))
	{
		long double d;
		int stop = 0;
		if (check(ligne) == 1)
			stop = 1;
		if (check(ligne) == 2)
			std::cout << "Error: not a positive number." << std::endl;
		else
		{
			std::list<long double> l;
			for (int i = 0; i < 3; i++)
			{
				d = std::atof(ligne.c_str());
				if (i == 0 && (d < _min))
					stop = 1;
				else if (i == 1 && (d < 1 || d > 12))
					stop = 1;
				else if (i == 2 && (d < 1 || d > 31))
					stop = 1;
				l.push_back(d);
				ligne = ligne.substr(ligne.find('-') + 1);
			}
			std::string rest = ligne;
			ligne = ligne.substr(ligne.find('|') + 1);
			long double res = std::atof(ligne.c_str());
			if (stop == 1)
			{
				//std::cout << "rest find = " << rest.find('|') << std::endl;
				std::list<long double>::iterator p = l.begin();
				const char * ss;
				if (rest.size() == 2)
					std::cout << "Error: bad input => " << *p << "-" <<  std::setfill('0') << std::setw(2) << *++p << "-" <<  std::setfill('0') << std::setw(2) << *++p << std::endl;
				else
				{
					ss = rest.c_str();
					ss = ss + 2;
					std::cout << "Error: bad input => " << *p << "-" <<  std::setfill('0') << std::setw(2) << *++p << "-" <<  std::setfill('0') << std::setw(2) << *++p << ss <<std::endl;
				}
			}
			else if (res > 1000)
			{
				std::cout << "Error: too large number." << std::endl;
			}
			else
			{
				//l.push_back(res);
				//_list2.push_back(l);
				std::list<long double>::iterator it = find(l);
				std::cout << *it << "-" << std::setfill('0') << std::setw(2) << *++it << "-" << std::setfill('0') << std::setw(2) << *++it; 
				std::cout << " => " << res << " = " << (res * (*++it)) << std::endl;
			}
		}
	}
	file.close();
}

void	BitcoinExchange::Parsel1()
{
	std::ifstream fichier("./include/data.csv", std::ios::in);
	if(fichier)
	{
		const char *str;
		std::string ligne;
		long double res;
		getline(fichier, ligne);
		while(getline(fichier, ligne))
		{
			std::list<long double> l;
			for (int i = 0; i < 3; i++)
			{
				str = ligne.c_str();
				l.push_back(std::atof(str));
				ligne = ligne.substr(ligne.find('-') + 1);
			}
			ligne = ligne.substr(ligne.find(',') + 1);
			str = ligne.c_str();
			std::istringstream iss(&str[0]);
			iss >> res;
			l.push_back(res);
			_list1.push_back(l);
		}
		fichier.close();
		std::list< std::list < long double > >::iterator it = _list1.begin();
		std::list< long double >::iterator it2 = (*it).begin();
		if (*it2)
			_min = *it2;
	}
	else
	{
		std::cerr << "Error while opening .csv" << std::endl;
		fichier.close();
		throw Error();
	}
}

void	BitcoinExchange::printlinel1()
{
	for (std::list<std::list<long double> >::iterator it = _list1.begin(); it != _list1.end(); it++)
	{
		for (std::list<long double>::iterator it2 = (*it).begin(); it2 != (*it).end(); it2++)
		{
			std::cout << std::setprecision(15) << *it2 << " ";
		}
		std::cout << std::endl;
	}
}

void	BitcoinExchange::printlinel2()
{
	for (std::list<std::list<long double> >::iterator it = _list2.begin(); it != _list2.end(); it++)
	{
		for (std::list<long double>::iterator it2 = (*it).begin(); it2 != (*it).end(); it2++)
		{
			std::cout << std::setprecision(15) << *it2 << " ";
		}
		std::cout << std::endl;
	}
}

const char * BitcoinExchange::Error::what() const throw()
{
	return ("Error");
}
