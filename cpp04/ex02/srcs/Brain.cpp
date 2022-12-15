/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:26:35 by avillar           #+#    #+#             */
/*   Updated: 2022/12/13 14:51:44 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(/* args */) : ideas(new std::string[100])
{
	std::cout << "Brain created" << std::endl;
}

Brain::~Brain()
{
	delete [] this->ideas;
	std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain(const Brain &og)
{
	operator=(og);
}

Brain&	Brain::operator=(const Brain &og)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = og.getIdea(i);
	return (*this);
}

std::string	Brain::getIdea(int i) const
{
	return (this->ideas[i]);
}

void	Brain::setIdea(int i, std::string idea)
{
	this->ideas[i] = idea;
}

void	Brain::printIdeas() const
{
	for(int i = 0; i < 100; i++)
		std::cout << this->ideas[i] << std::endl;
}