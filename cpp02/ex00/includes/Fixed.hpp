/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:15:06 by avillar           #+#    #+#             */
/*   Updated: 2022/11/21 10:38:34 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# include <iostream>

class Fixed
{
private:
	int	_rawBits;
	static const int _width = 8;

public:
	Fixed(/* args */);
	~Fixed();

	// recopy constructor
	Fixed(const Fixed &og);

	//operator overload *
	void	operator=(const Fixed &og);

	//functiun
	int		getRawBits( void ) const ;
	void	setRawBits(int const raw);
};


#endif