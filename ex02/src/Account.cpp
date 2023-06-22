/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:24:27 by arobu             #+#    #+#             */
/*   Updated: 2023/06/22 15:22:02 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include "iostream"
#include "ctime"
#include "iomanip"

	int	Account::_nbAccounts = 0;
	int	Account::_totalAmount = 0;
	int	Account::_totalNbDeposits = 0;
	int	Account::_totalNbWithdrawals = 0;


Account::Account (int initial_deposit)
{
	_displayTimestamp();
	_nbAccounts++;
	_accountIndex = getNbAccounts() - 1;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "created" << std::endl;
}

Account::~Account (void)
{
	_nbAccounts--;
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "closed" << std::endl;
}

//	Getters

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
	std::cout << "accounts:" << getNbAccounts() << ";"
			  << "total:" << getTotalAmount() << ";"
			  << "deposits:" << getNbDeposits() << ";"
			  << "withdrawals:" << getNbWithdrawals() 
			  << std::endl;
}
void	Account::_displayTimestamp(void)
{
	std::time_t	time = std::time(NULL);

	struct tm *t;
	t = std::localtime(&time);
	std::cout << "[" << std::setfill('0') 
			  << std::setw(4) << 1900 + t->tm_year
			  << std::setw(2) << t->tm_mon
			  << std::setw(2) << t->tm_mday 
			  << "_"
			  << std::setw(2) << t->tm_hour
			  << std::setw(2) << t->tm_min
			  << std::setw(2) << t->tm_sec
			  << "] " << std::flush;
				
}

void	Account::makeDeposit(int deposit)
{
	this->_displayTimestamp();
	this->_nbDeposits += 1;
	_totalAmount += deposit;
	_totalNbDeposits++;
	
	std::cout << "index:" << this->_accountIndex << ";"
			  << "p_amount:" << this->_amount << ";"
			  << "deposit:" << deposit << ";" 
			  << "amount:" << this->_amount + deposit << ";"
			  << "nb_deposits:" << _nbDeposits
			  << std::endl;
	
	this->_amount += deposit;
}
bool	Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();
	if (this->checkAmount() < withdrawal)
	{
		std::cout << "index:" << this->_accountIndex << ";"
			  	  << "p_amount:" << this->_amount << ";"
			  	  << "withdrawal:refused"
			  	  << std::endl;
		return (false);
	}
	_totalNbWithdrawals++;
	this->_nbWithdrawals++;
	_totalAmount -= withdrawal;
	
	std::cout << "index:" << this->_accountIndex << ";"
			  << "p_amount:" << this->_amount << ";"
			  << "withdrawal:" << withdrawal << ";" 
			  << "amount:" << this->_amount - withdrawal << ";"
			  << "nb_withdrawals:" << _nbWithdrawals
			  << std::endl;
	
	this->_amount -= withdrawal;
	return (true);
}
int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		  << "amount:" << this->_amount << ";"
		  << "deposits:" << _nbDeposits << ";"
		  << "withdrawals:" << _nbWithdrawals
		  << std::endl;
}
