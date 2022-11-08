/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:55:54 by avillar           #+#    #+#             */
/*   Updated: 2022/11/08 15:38:25 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

# include <iostream>

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
	Zombie*		newZombie(std::string name);
	void		randomChump(std::string name);
};


Zombie* newZombie( std::string name );
void randomChump( std::string name );


#endif