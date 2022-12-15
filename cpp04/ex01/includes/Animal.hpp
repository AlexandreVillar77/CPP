/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:45:35 by avillar           #+#    #+#             */
/*   Updated: 2022/12/13 14:05:53 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

# include <iostream>

class Animal
{
private:
	/* data */

protected:
	std::string _type;

public:
	Animal(/* args */);
	Animal(const Animal &og);
	virtual ~Animal();

	std::string	getType() const;
	void		setType(std::string const type);

	/**
	 * @brief surcharge d'operator
	 * 
	 * @param og 
	 */
	Animal	&operator=(const Animal &og);

	/**
	 * @brief Get the Type object
	 * 
	 * @return std::string 
	 */

	virtual void	makeSound() const;
};

#endif