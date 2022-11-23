/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:14:59 by avillar           #+#    #+#             */
/*   Updated: 2022/11/23 14:11:15 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

//Base constructor Destructor

Fixed::Fixed( void ) : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;

	// doit transformer num en fixe
}

Fixed::Fixed(const float num) : _rawBits(0)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = (int)((roundf(num * (1 << this->_width))));
	// doit transformer num en fixe
}


Fixed::Fixed(const int num) : _rawBits(0)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = num << this->_width;
	// doit transformer num en fixe
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//getter setters

int		Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}

void	Fixed::setRawBits(const int raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;
}

//operator overload

void	Fixed::operator=(const Fixed &og)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawBits = og.getRawBits();
}

std::ostream&	operator<<(std::ostream& os, const Fixed &item)
{
	return (os << item.toFloat());
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

/**
 * @brief Functiun
 * 
 */

float	Fixed::toFloat( void ) const
{
	return ((float)this->_rawBits / (float(1 << this->_width)));
}

int		Fixed::toInt( void ) const
{
	return ((int)this->_rawBits / (1 << this->_width));
}