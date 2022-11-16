/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:50:49 by avillar           #+#    #+#             */
/*   Updated: 2022/11/16 10:32:53 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main()
{
	Harl test;

	test.complain("debug");
	test.complain("info");
	test.complain("warning");
	test.complain("error");
	return (0);
}