/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:07:46 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/04 19:04:30 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0; 

Account::Account(int initial_deposit) {
    
    _accountIndex = _nbAccounts;
    _nbAccounts++;
	_amount = initial_deposit;
    _totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account(void) {
    
    _nbAccounts--;
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

    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "Deposits:" << getNbDeposits() << ";";
    std::cout << "Withdrawals:" << getNbWithdrawals() <<std::endl;
}

void	Account::makeDeposit(int deposit) {

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

    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "withdrawal:";
    if (withdrawal > checkAmount()) {
        std::cout << "refused" << std::endl;
        return (false);
    }
    std::cout << withdrawal << ";";
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    std::cout << "amount" << _amount << ";";
    std::cout << "nb_withdrawals" << _nbWithdrawals << std::endl;
    return (true);
}

int     Account::checkAmount( void ) const {

    return (_amount);
}

void	Account::displayStatus( void ) const {

    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "index:" << _nbWithdrawals << std::endl; 
}

void	Account::_displayTimestamp( void ) { //reste juste a faire ca
    
    std::cout << "temps";
}