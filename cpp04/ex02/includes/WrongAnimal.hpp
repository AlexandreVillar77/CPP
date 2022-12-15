/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:25:45 by avillar           #+#    #+#             */
/*   Updated: 2022/12/13 14:08:21 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

# include <iostream>

class WrongAnimal
{
private:
	std::string _type;
public:
	WrongAnimal(/* args */);
	WrongAnimal(const WrongAnimal &og);
	virtual ~WrongAnimal();

	std::string	getType() const;
	void		setType(std::string const type);

	/**
	 * @brief surcharge d'operator
	 * 
	 * @param og 
	 */
	WrongAnimal&	operator=(const WrongAnimal &og);

	/**
	 * @brief Get the Type object
	 * 
	 * @return std::string 
	 */

	virtual void	makeSound() const;
};

#endif