/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:47:01 by avillar           #+#    #+#             */
/*   Updated: 2023/01/10 10:05:29 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Scal.hpp"

int	get_Otype(Scal conv)
{

}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Use case :\n./convert [arg]" << std::endl;
		return (1);
	}
	Scal	conv(argv[1]);


	return (0);
}