/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:07:08 by avillar           #+#    #+#             */
/*   Updated: 2022/12/13 14:58:37 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Brain.hpp"

int	main()
{
	const Animal** animals = new const Animal*[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	
	//print ideas
	std::cout << "Ideas of the first Dog:" << std::endl;
	((Dog*)animals[0])->getBrain()->printIdeas();

	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	delete [] animals;
	
	return (0);
}