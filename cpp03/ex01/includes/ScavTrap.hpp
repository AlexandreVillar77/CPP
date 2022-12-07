/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:43:06 by avillar           #+#    #+#             */
/*   Updated: 2022/12/07 09:07:05 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
private:
	/**
	 * @brief
	 * All private attribute are herited fro; clapTrap class 
	 * 
	 */

public:
	ScavTrap(/* args */);
	ScavTrap(std::string name);
	~ScavTrap();

	// recopy constructor
	ScavTrap(const ScavTrap &og);

	//operator overload *
	void	operator=(const ScavTrap &og);

	void	guardGate();
};

#endif