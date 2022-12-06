/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:33:44 by avillar           #+#    #+#             */
/*   Updated: 2022/12/06 15:39:27 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int	main()
{
	/*ClapTrap a;
    ScavTrap b("Alpha");
    ScavTrap c("Beta");
    ClapTrap d("Billy");

    b.attack(a.getName());
    std::cout << std::endl;

    b.attack(c.getName());
	c.takeDamage(b.getAttackDmg());
    b.attack(c.getName());
	c.takeDamage(b.getAttackDmg());
    a.attack(c.getName());
	c.takeDamage(a.getAttackDmg());
    a.attack(c.getName());
	c.takeDamage(a.getAttackDmg());
    a.attack(c.getName());
	c.takeDamage(a.getAttackDmg());
    d.attack(c.getName());
    d.attack(c.getName());
    d.attack(c.getName());
    d.attack(c.getName());
    d.attack(c.getName());
    d.attack(c.getName());
    d.beRepaired(1);
    std::cout << std::endl;

    b.attack(c.getName());
    c.takeDamage(9);
    c.beRepaired(1);
    c.takeDamage(1);
    c.takeDamage(1);
    c.takeDamage(1);
    c.beRepaired(10);

	b.guardGate();
    std::cout << std::endl;*/

	FragTrap a;
	FragTrap b("Beta");

	b.attack(a.getName());
	b.highFivesGuys();

	return (0);
}