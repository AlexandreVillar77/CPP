/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:15:06 by avillar           #+#    #+#             */
/*   Updated: 2022/11/23 15:22:40 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# include <iostream>
# include <cmath>
# include <fstream>

class Fixed
{
private:
	int	_rawBits;
	static const int _width = 8;

public:
	Fixed();
	Fixed(const float num);
	Fixed(const int num);
	~Fixed();

	// recopy constructor
	Fixed(const Fixed &og);

	//operator overload *
	void	operator=(const Fixed &og);
	int		operator<(const Fixed &og);
	int		operator>(const Fixed &og);
	int		operator>=(const Fixed &og);
	int		operator<=(const Fixed &og);
	int		operator==(const Fixed &og);
	int		operator!=(const Fixed &og);

	Fixed&	operator+(const Fixed &og);
	Fixed&	operator-(const Fixed &og);
	Fixed&	operator*(const Fixed &og);
	Fixed&	operator/(const Fixed &og);

	Fixed    &operator++();
	Fixed    operator++(int);

	Fixed    &operator--();
	Fixed    operator--(int);

	//functiun
	int		getRawBits( void ) const ;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;

	const static	Fixed	&min(const Fixed &a, const Fixed &b);
	static	Fixed	&min(Fixed &a, Fixed &b);
	const static	Fixed	&max(const Fixed &a, const Fixed &b);
	static	Fixed	&max(Fixed &a, Fixed &b);
};

std::ostream	&operator<<(std::ostream& os, const Fixed &item);

#endif