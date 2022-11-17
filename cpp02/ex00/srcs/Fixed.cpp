/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:14:59 by avillar           #+#    #+#             */
/*   Updated: 2022/11/17 16:09:52 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

//Base constructor Destructor

Fixed::Fixed(/* args */) : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//getter setters

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;
}

//operator overload

void	Fixed::operator=(const Fixed &og)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawBits = og.getRawBits();
}

//Copy Constructor
/*
* call operator=() or just this->_rawBits = og._rawBits;
*/


Fixed::Fixed(const Fixed &og)
{
	std::cout << "Copy constructor called" << std::endl;
	operator=(og);
}
