/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:00:15 by avillar           #+#    #+#             */
/*   Updated: 2022/11/16 10:46:19 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "Something wrong is happening here but i don't think it's important" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I see some smoke going up from the forest not far from here" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I can already see fire from the forest" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "It's to late we cannot stop the fire anymore" << std::endl;
}

void	Harl::complain(std::string level)
{
	void (Harl::*fct[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string l[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(l[i]) == 0)
		{
			switch (i)
			{
				case 0:
					(this->*fct[0])(), (this->*fct[1])(), (this->*fct[2])(), (this->*fct[3])();
					break;
				case 1:
					(this->*fct[1])(), (this->*fct[2])(), (this->*fct[3])();
					break;
				case 2:
					(this->*fct[2])(), (this->*fct[3])();
					break;
				case 3:
					(this->*fct[3])();
					break;
				default:
					break;
			}
			return ;
		}
	}
	std::cout << "[Nothing important here comeback later]" << std::endl;
}