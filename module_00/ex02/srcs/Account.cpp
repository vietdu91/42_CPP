/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:50:36 by emtran            #+#    #+#             */
/*   Updated: 2022/06/09 20:12:57 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {

	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts++;
	this->_accountIndex = Account::_nbAccounts - 1;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
	return ;
}

Account::~Account(void) {

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit) {

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal) {

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";withdrawal:";
	if (this->_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout << withdrawal;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount(void) const {

	std::cout << "checkAmount" << std::endl;
	return (0);
}

void	Account::displayStatus(void) const {

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}

void	Account::displayAccountsInfos(void) {

	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
	return ;
}

void	Account::_displayTimestamp(void) {

	std::time_t		timestamp;

	timestamp = time(NULL);

	std::tm		*time_now = localtime(&timestamp);

	std::cout << "[";
	std::cout << time_now->tm_year + 1900;
	std::cout << std::setw(2) << std::setfill('0') << time_now->tm_mon + 1;
	std::cout << std::setw(2) << std::setfill('0') << time_now->tm_mday;
	std::cout << "_";
	std::cout << std::setw(2) << std::setfill('0') << time_now->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << time_now->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << time_now->tm_sec;
	std::cout << "] ";
}
