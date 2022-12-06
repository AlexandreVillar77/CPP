/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:45:35 by avillar           #+#    #+#             */
/*   Updated: 2022/12/06 16:12:30 by avillar          ###   ########.fr       */
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
	~Animal();

	std::string	getType() const;
	void		setType(std::string type) const;

	void	makeSound() const;
};

#endif