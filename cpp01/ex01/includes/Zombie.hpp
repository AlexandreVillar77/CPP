/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:55:54 by avillar           #+#    #+#             */
/*   Updated: 2022/11/08 16:05:33 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

# include <iostream>
# include <cstdlib>

class Zombie
{
private:
	std::string	name;

public:
	Zombie();
	~Zombie();

	void		setName(std::string name);
	std::string	getName(void);
	void		announce(void);
};

Zombie* zombieHorde( int N, std::string name );



#endif