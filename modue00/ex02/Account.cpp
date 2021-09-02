#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit)
{
	initial_deposit = 0;	
}

Account::~Account( void )
{
	return;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total" << getTotalAmount() << ";";
	std::cout << "deposits" << getNbDeposits() << ";";
	std::cout << "withdrawals" << getNbWithdrawals() << ";";
	std::cout << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	 deposit = 0;
	return;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	withdrawal = 0;
	return false;
}

int		Account::checkAmount(void) const
{
	return 0;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	return;
}


void	Account::_displayTimestamp(void)
{
	std::time_t			now;
	std::tm				*localtime;
	char			date[80];
	std::string			format;

	now = std::time(NULL);
	localtime = std::localtime(&now);
	format = "[%Y%m%d_%H%M%S] ";
	std::strftime(date, 80, format.c_str(), localtime);
	std::cout << date;
}