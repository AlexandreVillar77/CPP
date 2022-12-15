/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:50:38 by avillar           #+#    #+#             */
/*   Updated: 2022/12/13 14:56:10 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *_brain;

public:
	Cat(/* args */);
	Cat(Cat const & src);

	~Cat();
	Cat	&operator=(Cat const & src);

	Brain	*getBrain() const;

	void	makeSound() const;
};

#endif