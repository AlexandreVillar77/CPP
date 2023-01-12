/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:47:01 by avillar           #+#    #+#             */
/*   Updated: 2023/01/12 15:58:04 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Scal.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Use case :\n./convert [arg]" << std::endl;
		return (1);
	}
	try {
		Scal	conv(argv[1]);
		conv.CheckArg();
	}
	catch (std::exception & e){
		std::cout << "error : " << e.what() << std::endl;
	}
	return (0);
}