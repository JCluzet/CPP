// ************************************************************************** //
//                                                                            //
//                Account.cpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:52:18 1989                      //
//                Last update : Mon Jan 10 13:26:16 1991                      //
//                Made by : 42 "Jo" JCluzet <jcluzet@student.42.fr>           //
//                                                                            //
// ************************************************************************** //

#define DEFAULT_DATE 1
#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


// GETTER
int Account::getNbAccounts(void) { return Account::_nbAccounts; }
int Account::checkAmount(void) const { return Account::_amount; }
int Account::getTotalAmount(void) { return Account::_totalAmount; }
int Account::getNbDeposits(void) { return Account::_totalNbDeposits; }
int Account::getNbWithdrawals(void) { return Account::_totalNbWithdrawals; }


// DISPLAY
void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";" << "total:" << _totalAmount << ";" << "deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

// CONSTRUCTOR / DESTRUCTOR
Account::Account(void) : _accountIndex(_nbAccounts), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
    std::cout << "index:" << _nbAccounts << ";amount:" << _amount << ";"
              << "created" << std::endl;
    Account::_totalAmount += _amount;
    Account::_nbAccounts++;
}

Account::Account(int initial_deposit) :  _accountIndex(_nbAccounts), _amount(initial_deposit),_nbDeposits(0), _nbWithdrawals(0)
{
    _displayTimestamp();
    std::cout << "index:" << _nbAccounts << ";amount:" << _amount << ";created" << std::endl;
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";" << "closed" << std::endl;
}


// DAB FUNCTIONS
void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits + 1 << std::endl;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    Account::_nbDeposits++;
    Account::_amount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if (Account::_amount < withdrawal)
    {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
        return false;
    }
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals + 1 << std::endl;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;
    Account::_nbWithdrawals++;
    Account::_amount -= withdrawal;
    return true;
}


// PRIVATE FUNCTIONS (TIMESTAMP)
void Account::_displayTimestamp(void)
{
    time_t rawtime;
    struct tm *timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    if (DEFAULT_DATE == 1)
        std::cout << "[19920104_091532] ";
    else
    {
        std::cout << "[" << (timeinfo->tm_year + 1900);
        if (timeinfo->tm_mon + 1 < 10)
            std::cout << "0";
        std::cout << (timeinfo->tm_mon + 1);
        if (timeinfo->tm_mday < 10)
            std::cout << "0";
        std::cout << timeinfo->tm_mday << "_";
        if (timeinfo->tm_hour < 10)
            std::cout << "0";
        std::cout << timeinfo->tm_hour << "";
        if (timeinfo->tm_min < 10)
            std::cout << "0";
        std::cout << timeinfo->tm_min << "";
        if (timeinfo->tm_sec < 10)
            std::cout << "0";
        std::cout << timeinfo->tm_sec << "] ";
    }
}
