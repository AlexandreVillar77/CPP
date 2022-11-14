/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:46:45 by avillar           #+#    #+#             */
/*   Updated: 2022/11/14 13:11:44 by avillar          ###   ########.fr       */
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
		for (int j = 0; argv[i][j]; j++)
		{
			if ((char)(argv[i][j]) >= 97 && (char)(argv[i][j]) <= 122)
				std::cout << (char)((argv[i][j]) - 32);
			else if ((argv[i][j]))
				std::cout << (char)(argv[i][j]);
		}
	}
	std::cout << std::endl;
	return (0);
}