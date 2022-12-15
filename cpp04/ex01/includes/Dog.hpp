/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:47:47 by avillar           #+#    #+#             */
/*   Updated: 2022/12/13 14:56:14 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *_brain;
	
public:
	Dog(/* args */);
	Dog(Dog const & src);

	~Dog();
	Dog&	operator=(Dog const & src);

	Brain	*getBrain() const;

	void	makeSound() const;
};

#endif