/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:07:08 by avillar           #+#    #+#             */
/*   Updated: 2022/12/13 13:12:10 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int	main()
{
	/*const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;*/

	const WrongAnimal* ani = new WrongAnimal();
	const WrongAnimal* Wcat = new WrongCat();
	const Animal* Tcat = new Cat();

	std::cout << Wcat->getType() << " " << std::endl;
	std::cout << Tcat->getType() << " " << std::endl;
	Wcat->makeSound();
	Tcat->makeSound();
	ani->makeSound();
	delete Wcat;
	delete Tcat;
	delete ani;
	return (0);
}