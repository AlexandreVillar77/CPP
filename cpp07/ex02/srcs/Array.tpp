/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:22:06 by avillar           #+#    #+#             */
/*   Updated: 2023/01/23 09:28:25 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

template <typename T> Array<T>::Array() : _array(new T[0]), _size(0)
{
	std::cout << "Default constructor called" << std::endl;
}

template <typename T> Array<T>::Array(unsigned int i) : _array(new T[i]), _size(i)
{
	std::cout << "Constructor called" << std::endl;
}

template <typename T> Array<T>::Array(Array const &src) : _array(new T[src.size()]), _size(src.size())
{
	operator=(src);
	std::cout << "Copy constructor called" << std::endl;
}

template <typename T> Array<T>::~Array()
{
	std::cout << "Destructor called" << std::endl;
	delete [] _array;
}

template <typename T> Array<T> & Array<T>::operator=(Array<T> const &src)
{
	if (_size > 0 && _array != NULL)
		delete [] _array;
	_array = new T[src.size()];
	_size = src.size();

	for (unsigned int i = 0; i < _size; i++)
		_array[i] = src[i];
	return (*this);
}

template <typename T> unsigned int Array<T>::size() const
{
	return (_size);
}

template <typename T> T & Array<T>::operator[](unsigned int i) const
{
	if (i >= _size)
		throw Array<T>::OutOfLimitsException();
	return (_array[i]);
}

template <typename T> const char* Array<T>::OutOfLimitsException::what() const throw()
{
	return ("Index is out of limits");
}