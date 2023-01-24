/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:36:46 by avillar           #+#    #+#             */
/*   Updated: 2023/01/24 09:45:04 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>
# include <iostream>
# include <vector>

class NotInContainer : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Not in container");
		}
};

template<typename T>
void easyfind(T &container, int x)
{
	typename T::iterator it = std::find(container.begin(), container.end(), x);
	if (it == container.end())
		throw NotInContainer();
	std::cout << "Found " << x << " in container at index " << *it << std::endl;
}

#endif