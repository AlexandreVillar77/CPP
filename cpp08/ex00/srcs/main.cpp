/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:36:38 by avillar           #+#    #+#             */
/*   Updated: 2023/01/24 09:44:17 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

int main()
{
	std::vector <int> v(5);

	for (int i = 0; i < 5; i++)
		v[i] = i;
	easyfind(v, 3);
	try {
		easyfind(v, 6);
	}
	catch (std::exception &e) {
		std::cout << "error : " << e.what() << std::endl;
	}
	return (0);
}