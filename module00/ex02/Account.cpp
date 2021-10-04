#include "Account.hpp"
#include <iostream>
#include <ctime>

#define cout std::cout
#define endl std::endl
#define string std::string 

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;

	cout << "index:" << _accountIndex << ";";
	cout << "amount:" << _amount << ";";
	cout << "created" << endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "amount:" << _amount << ";";
	cout << "closed";
	cout << endl;
	return;
}

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
	cout << "accounts:" << getNbAccounts() << ";";
	cout << "total:" << _totalAmount << ";";
	cout << "deposits:" << _totalNbDeposits << ";";
	cout << "withdrawals:" << getNbWithdrawals() << ";";
	cout << endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();

	_nbDeposits++;
	_totalNbDeposits++;

	cout << "index:" << _accountIndex << ";";
	cout << "p_amount:" << _amount << ";";
	cout << "deposit:" << deposit << ";";

	_amount = _amount + deposit;

	cout << "amount:" << _amount << ";";
	cout << "nb_deposits:" << _nbDeposits << endl;

	_totalAmount = _totalAmount + deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();

	cout << "index:" << _accountIndex << ";";
	cout << "p_amount:" << _amount << ";";
	cout << "withdawals:" ;

	if (_amount < withdrawal)
	{
		cout << "refused\n";
		return false;
	}	

	 _totalNbWithdrawals++;
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _amount -= withdrawal;

	cout << withdrawal << ";" ;
	cout << "amount:" << _amount << ";";
	cout << "nb_withdrawals:" << _nbWithdrawals;
	cout << endl;

	return true;
}

int Account::checkAmount(void) const
{
	return _amount;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	
	cout << "index:" << _accountIndex << ";";
	cout << "amount:" << _amount << ";";
	cout << "deposits:" << _nbDeposits << ";";
	cout << "withdrawals:" << _nbWithdrawals << ";";
	cout << endl;

	return;
}

void Account::_displayTimestamp(void)
{
	std::time_t now;
	std::tm *localtime;
	char date[80];
	string format;

	now = std::time(NULL);
	localtime = std::localtime(&now);
	format = "[%Y%m%d_%H%M%S] ";
	std::strftime(date, 80, format.c_str(), localtime);
	cout << date;
}