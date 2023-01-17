/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:57:21 by avillar           #+#    #+#             */
/*   Updated: 2023/01/17 13:11:54 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/iter.hpp"

void print(int const &i)
{
	std::cout << i << std::endl;
}

int main(int, char**)
{
	int	tab[5] = {0, 1, 2, 3, 4};
	::iter(tab, 5, print);
	return (0);
}