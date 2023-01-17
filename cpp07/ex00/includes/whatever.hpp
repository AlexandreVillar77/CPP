/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:01:57 by avillar           #+#    #+#             */
/*   Updated: 2023/01/17 11:30:07 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
T max(T a, T b)
{
	return (a > b ? a : b);
}

template <typename T>
T min(T a, T b)
{
	return (a < b ? a : b);
}

template <typename T>
void	swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

#endif