/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:20:03 by avillar           #+#    #+#             */
/*   Updated: 2022/12/13 14:51:26 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

# include <iostream>

class Brain
{
private:
	std::string *ideas;

public:
	Brain(/* args */);
	Brain(Brain const & src);

	~Brain();

	Brain&	operator=(Brain const & src);
	std::string	getIdea(int i) const;
	std::string	*getIdeas() const;
	void	setIdea(int i, std::string idea);
	void	setIdeas(std::string *ideas);
	void 	printIdeas() const;

};

#endif