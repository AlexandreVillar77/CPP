/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:58:03 by avillar           #+#    #+#             */
/*   Updated: 2023/05/16 15:37:00 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <ctime>
# include <cstdlib>

class PmergeMe
{
private:
	std::vector<int>	_v;
	std::deque<int>		_d;
	std::clock_t		_start;
	double				_vectorTime;
	double				_dequeTime;
	char**				_av;

public:
	PmergeMe(/* args */);
	PmergeMe(char **argv);
	~PmergeMe();

	PmergeMe(const PmergeMe &p);
	void operator=(const PmergeMe &p);

	int	check(char * s);

	void	createV(char **av);
	void	createD(char **av);

	void	mergeSortV(std::vector<int> &v, int l, int r);
	void	mergeSortD(std::deque<int> &d, int l, int r);

	void	printV();
	//void	printD();

	void	mergeV(std::vector<int> &v, int l, int m, int r);
	void	mergeD(std::deque<int> &d, int l, int m, int r);
	
	void	sortV();

	void	printTime();
	void	printAV();

	std::vector<int>	getV() const;
	//std::deque<int>		getD() const;
	class	Error: public std::exception
	{
		virtual const char* what() const throw();
	};
};


#endif
