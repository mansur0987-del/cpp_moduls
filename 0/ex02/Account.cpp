/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:17:50 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/03 23:01:01 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account (void)
{

}

Account::Account (int initial_deposit)
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	t::_nbAccounts++;
	t::_totalAmount = t::_totalAmount + initial_deposit;
	this->_accountIndex = t::_nbAccounts - 1;
	this->_amount = initial_deposit;
	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" <<
	"amount:" << this->_amount << ";" << "created" << std::endl;
}

Account::~Account (void)
{
	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" <<
	"amount:" << this->_amount << ";" << "closed" << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	t::_displayTimestamp();
	std::cout << "accounts:" << t::getNbAccounts() << ";" \
	<< "total:" << t::getTotalAmount() << ";" \
	<< "deposits:" << t::getNbDeposits() << ";" \
	<< "withdrawals:" << t::getNbWithdrawals() << ";" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t tim;
	std::tm		tmp;
	std::time(&tim);
	tmp = *(std::localtime(&tim));
	std::cout << "[" << tmp.tm_year + 1900;
	if (tmp.tm_mon + 1 < 10)
		std::cout << "0";
	std::cout << tmp.tm_mon + 1;
	if (tmp.tm_mday < 10)
		std::cout << "0";
	std::cout << tmp.tm_mday << "_";
	if (tmp.tm_hour < 10)
		std::cout << "0";
	std::cout << tmp.tm_hour;
	if (tmp.tm_min < 10)
		std::cout << "0";
	std::cout << tmp.tm_min;
	if (tmp.tm_sec < 10)
		std::cout << "0";
	std::cout << tmp.tm_sec << "] ";
}

void	Account::makeDeposit( int deposit )
{
	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" \
	<< "p_amount:" << this->_amount << ";" \
	<< "deposits:" << deposit << ";" \
	<< "amount:" << this->_amount + deposit << ";" \
	<< "nb_deposits:" << this->_nbDeposits + 1 \
	<< std::endl;
	this->_amount = this->_amount + deposit;
	this->_nbDeposits++;
	t::_totalAmount = t::_totalAmount + deposit;
	t::_totalNbDeposits = t::_totalNbDeposits + 1;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" \
	<< "p_amount:" << this->_amount << ";";
	this->_amount = this->_amount - withdrawal;
	if (!(checkAmount()))
	{
		std::cout << "withdrawal:refused" << std::endl;
		this->_amount = this->_amount + withdrawal;
		return false;
	}
	std::cout << "withdrawal:" << withdrawal << ";" \
	<< "amount:" << this->_amount << ";" \
	<< "nb_withdrawals:" << this->_nbWithdrawals + 1 \
	<< std::endl;
	this->_nbWithdrawals++;
	t::_totalAmount = t::_totalAmount - withdrawal;
	t::_totalNbWithdrawals++;
	return true;
}

int		Account::checkAmount(void) const
{
	if (this->_amount < 0)
		return (0);
	return (1);
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

void	Account::displayStatus( void ) const
{
	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" \
	<< "amount:" << this->_amount << ";" \
	<< "deposits:" << this->_nbDeposits << ";" \
	<< "withdrawals:" << this->_nbWithdrawals << ";" << std::endl;
}
