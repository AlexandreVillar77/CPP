/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:12:57 by avillar           #+#    #+#             */
/*   Updated: 2023/01/17 13:36:34 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template <typename T> class Array{
	private:
		T *_array;
		unsigned int _size;

	public:
		Array();
		Array(unsigned int n);
		Array(Array const & src);

		~Array();

		Array & operator=(Array const & src);
		T & operator[](unsigned int i) const;

		unsigned int size() const;

		class OutOfLimitsException : public std::exception {
				virtual const char* what() const throw();
		};
};

#endif