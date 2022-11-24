/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:33:44 by avillar           #+#    #+#             */
/*   Updated: 2022/11/24 13:38:51 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main()
{
    ClapTrap a;
    ClapTrap b("Clap");
    ClapTrap c("John");
    ClapTrap d("Billy");

    b.attack(a.getName());
    std::cout << std::endl;

    d.attack(c.getName());
    d.attack(c.getName());
    d.attack(c.getName());
    d.attack(c.getName());
    d.attack(c.getName());
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
    std::cout << std::endl;
    
    return (0);
}