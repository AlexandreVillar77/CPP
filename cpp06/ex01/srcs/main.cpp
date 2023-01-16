/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:56:54 by avillar           #+#    #+#             */
/*   Updated: 2023/01/16 11:02:55 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serialize.hpp"

uintptr_t	serialize(Data *data)
{
	return (reinterpret_cast<uintptr_t>(data));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main()
{
	Data*	data = new Data();

	std::cout << "Data: " << data << std::endl;
	uintptr_t ptr = serialize(data);
	std::cout << "Serialized: " << ptr << std::endl;
	Data* data2 = deserialize(ptr);
	std::cout << "Deserialized: " << data2 << std::endl;
	delete data;
	return (0);
}