/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:28:16 by avillar           #+#    #+#             */
/*   Updated: 2022/11/08 14:41:02 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Account.hpp"

#include <iostream>
#include <iomanip>
#include <ctime> 

Account::Account (int initial_deposit)
{
	_nbDeposits = initial_deposit;
}

Account::~Account()
{

}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "index:" << 
}

void	Account::makeDeposit(int deposit)
{

}

bool	Account::makeWithdrawal(int withdrawal)
{

}

int	Account::checkAmount(void) const
{

}

void	Account::displayStatus(void) const
{
	this->
}

void	Account::_displayTimestamp(void)
{
	time_t t = time(0);
	struct tm *lt = localtime(&t);
	std::cout << "[" << std::setfill('0');
	std::cout << std::setw(4) << lt->tm_year + 1900
	<< std::setw(2) << lt->tm_mon + 1
	<< std::setw(2) << lt->tm_mday << "_"
	<< std::setw(2) << lt->tm_hour
	<< std::setw(2) << lt->tm_min
	<< std::setw(2) << lt->tm_sec << "] "
	<< std::endl;
}