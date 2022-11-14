/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:46:45 by avillar           #+#    #+#             */
/*   Updated: 2022/11/14 15:55:55 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (1);
	}
	for (int i = 1; argv[i]; i++)
	{
		std::string str = argv[i];
		for (int j = 0; str[j]; j++)
			std::cout << (char)toupper(str[j]);
	}
	std::cout << std::endl;
	return (0);
}