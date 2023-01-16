/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:03:16 by avillar           #+#    #+#             */
/*   Updated: 2023/01/16 13:00:13 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

Base	*generate(void)
{
	int i = rand() % 3;
	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	try {
		if (dynamic_cast<A*>(&p))
			std::cout << "A" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		if (dynamic_cast<B*>(&p))
			std::cout << "B" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		if (dynamic_cast<C*>(&p))
			std::cout << "C" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int	main()
{
	srand(time(NULL)); // reset rand

	Base *b1 = generate();
	Base *b2 = generate();
	Base *b3 = generate();

	Base &b4 = *b1;
	Base &b5 = *b2;
	Base &b6 = *b3;

	std::cout << "b1 : " << std::endl;
	identify(b1);
	identify(b4);
	std::cout << std::endl << "b2 : " << std::endl;
	identify(b2);
	identify(b5);
	std::cout << std::endl << "b3 : " << std::endl;
	identify(b3);
	identify(b6);

	delete b1;
	delete b2;
	delete b3;
	return (0);
}