#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	initial_deposit = 0;
	_displayTimestamp();
	_accountIndex = 0;
	_amount = checkAmount();

	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed";
	std::cout << std::endl;
	return;
}
/**/
int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << ";";
	std::cout << std::endl;
}
/**/
void Account::makeDeposit(int deposit)
{
	deposit = 0;
	return;
}

bool Account::makeWithdrawal(int withdrawal)
{
	withdrawal = 0;
	return false;
}

int Account::checkAmount(void) const
{
	return _amount;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << ";";
	std::cout << std::endl;

	return;
}

void Account::_displayTimestamp(void)
{
	std::time_t now;
	std::tm *localtime;
	char date[80];
	std::string format;

	now = std::time(NULL);
	localtime = std::localtime(&now);
	format = "[%Y%m%d_%H%M%S] ";
	std::strftime(date, 80, format.c_str(), localtime);
	std::cout << date;
}

// there is amount and p amount
// there is withdrawals and nb-withdrawals
// deposit and nb_deposits
