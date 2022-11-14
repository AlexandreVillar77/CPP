/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:15:04 by avillar           #+#    #+#             */
/*   Updated: 2022/11/14 10:24:02 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";

	
	std::string* stringPTR = &str;
	std::string& stringREF = str;


	// affichage des adresse

	std::cout << "adresse de la string : " << &str << std::endl;
	std::cout << "adresse stockee dans stringPTR : " << stringPTR << std::endl;
	std::cout << "adresse stockee dans stringREF : " << &stringREF << std::endl;

	//affichage des valeur

	std::cout << "valeur de la string : " << str << std::endl;
	std::cout << "valeur de stringPTR : " << *stringPTR << std::endl;
	std::cout << "valeur de stringREF : " << stringREF << std::endl;

	return (0);
}