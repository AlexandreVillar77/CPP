/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:21:08 by avillar           #+#    #+#             */
/*   Updated: 2022/12/07 09:11:21 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

# include "ScavTrap.hpp"
# include <iostream>

class FragTrap : public ScavTrap
{
private:
	/* data */
public:
	FragTrap(/* args */);
	FragTrap(std::string name);
	~FragTrap();

	// recopy constructor
	FragTrap(const FragTrap &og);

	//operator overload *
	void	operator=(const FragTrap &og);

	void highFivesGuys(void);
};

#endif