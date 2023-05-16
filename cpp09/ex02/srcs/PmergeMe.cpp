/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:57:53 by avillar           #+#    #+#             */
/*   Updated: 2023/05/16 15:39:37 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

PmergeMe::PmergeMe(/* args */) : _start(std::clock()) , _vectorTime(0), _dequeTime(0)
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &p)
{
	*this = p;
}

void PmergeMe::operator=(const PmergeMe &p)
{
	_v = p._v;
	_d = p._d;
	_start = p._start;
	_vectorTime = p._vectorTime;
	_dequeTime = p._dequeTime;
}

int		PmergeMe::check(char * s)
{
	int i = 0;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return 1;
		i++;
	}
	return 0;
}

PmergeMe::PmergeMe(char **argv)
{
	int	i = 1;

	while (argv[i])
	{
		if (check(argv[i]) == 1)
		{
			std::cout << "Error: " << argv[i] << " is not a good argument" << std::endl;
			throw Error();
		}
		else
		{
			_v.push_back(atoi(argv[i]));
			_d.push_back(atoi(argv[i]));
		}
		i++;
	}
}

void PmergeMe::mergeD(std::deque<int> &v, int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    int L[n1], R[n2];
 
    for (i = 0; i < n1; i++)
        L[i] = v[l + i];
    for (j = 0; j < n2; j++)
        R[j] = v[m + 1+ j];
 
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        } else {
            v[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        v[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        v[k] = R[j];
        j++;
        k++;
    }
}

void PmergeMe::mergeV(std::vector<int> &v, int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    int L[n1], R[n2];
 
    for (i = 0; i < n1; i++)
        L[i] = v[l + i];
    for (j = 0; j < n2; j++)
        R[j] = v[m + 1+ j];
 
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        } else {
            v[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        v[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        v[k] = R[j];
        j++;
        k++;
    }
}

void PmergeMe::mergeSortD(std::deque<int> &v, int l, int r) {
    if (l < r) {
        int m = l+(r-l)/2;
        mergeSortD(v, l, m);
        mergeSortD(v, m+1, r);
        mergeD(v, l, m, r);
    }
}

void PmergeMe::mergeSortV(std::vector<int> &v, int l, int r) {
    if (l < r) {
        int m = l+(r-l)/2;
        mergeSortV(v, l, m);
        mergeSortV(v, m+1, r);
        mergeV(v, l, m, r);
    }
}

void PmergeMe::printV() {
    for (std::vector<int>::iterator it = _v.begin(); it != _v.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::printTime()
{
	std::cout << "Time to process a range of " << _v.size() << " elements with std::Vector " << _vectorTime << " ms" << std::endl;
	std::cout << "Time to process a range of " << _v.size() << " elements with std::Deque " << _dequeTime << " ms" <<std::endl;
}

void PmergeMe::sortV()
{
	_start = std::clock();
	mergeSortV(_v, 0, _v.size() - 1);
	_vectorTime = (std::clock() - _start);
	_start = std::clock();
	mergeSortD(_d, 0, _d.size() - 1);
	_dequeTime = (std::clock() - _start);
}

std::vector<int> PmergeMe::getV() const
{
	return _v;
}

const char *PmergeMe::Error::what() const throw()
{
	return "Error: ";
}
