/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:07:46 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/10 20:20:05 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0; 

Account::Account(int initial_deposit) {
    
    _nbAccounts++;
    _accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
    _totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account(void) {
    
    _nbAccounts--;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}

int  Account::getNbAccounts(void) {
   
    return (_nbAccounts);
}

int  Account::getTotalAmount(void) {
   
    return (_totalAmount);
}

int  Account::getNbDeposits(void) {
   
    return (_totalNbDeposits);
}

int  Account::getNbWithdrawals(void) {
   
    return (_totalNbWithdrawals);
}

void    Account::displayAccountsInfos(void) {

    Account::_displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() <<std::endl;
}

void	Account::makeDeposit(int deposit) {

    Account::_displayTimestamp();
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    _amount += deposit;
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {

    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "withdrawal:";
    if (withdrawal > checkAmount()) {
        std::cout << "refused" << std::endl;
        return (false);
    }
    std::cout << withdrawal << ";";
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    _amount -= withdrawal;
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (true);
}

int     Account::checkAmount( void ) const {

    return (_amount);
}

void	Account::displayStatus( void ) const {

    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl; 
}

void	Account::_displayTimestamp( void ) {
    
    std::time_t currentTime = std::time(NULL);
    std::tm* localTime = std::localtime(&currentTime);
    std::cout << '[' << (localTime->tm_year + 1900)
              << (localTime->tm_mon + 1)
              << localTime->tm_mday << '_'
              << localTime->tm_hour
              << localTime->tm_min
              << localTime->tm_sec << "] ";
}