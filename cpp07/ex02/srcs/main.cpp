/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:57:21 by avillar           #+#    #+#             */
/*   Updated: 2023/01/23 09:21:12 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

#define MAX_VAL 750

int	main()
{
	::Array<int> *a = new ::Array<int>(5);

	for (int i = 0; i < 5; i++)
		(*a)[i] = i;
	for (int i = 0; i < 5; i++)
		std::cout << (*a)[i] << std::endl;

	std::cout << std::endl << "----------------" << std::endl;
	std::cout << std::endl << "test i > " << (*a).size() << std::endl;
	try
	{
		std::cout << (*a)[6] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "error : " << e.what() << std::endl;
	}

	std::cout << std::endl << "----------------" << std::endl;
	std::cout << std::endl << "test copy modif" << std::endl;
	::Array<int> *b = new ::Array<int>(*a);
	std::cout << "tab b:" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << (*b)[i] << std::endl;
	std::cout << "modif tab b" << std::endl;
	for (int i = 0; i < 5; i++)
		(*b)[i] = i + 5;
	std::cout << "tab a:" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << (*a)[i] << std::endl;
	std::cout << "tab b:" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << (*b)[i] << std::endl;
	delete a;
	delete b;
	return (0);
}

/*int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}*/