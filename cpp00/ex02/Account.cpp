#include <iostream>
#include "Account.hpp"


	int initial_deposit;

	//Constructor
	Account::Account(){}
	
	Account::Account(int initial_deposit) 
	{
		//OWN
		this->_amount = initial_deposit;		
		this->_nbDeposits = 1;
		this->_nbWithdrawals = 0;
		//STATIC
		Account::_nbAccounts++;
		this->_accountIndex = Account::getNbAccounts();
	}

		// Functions non static
	void Account::makeDeposit(int deposit)
	{
		if (deposit > 0)
		{
			//OWN
			this->_amount += deposit;
			this->_nbDeposits++;
			//STATIC
			 Account::_totalAmount += deposit;
			 Account::_totalNbDeposits++;
		}
	}

	bool Account::makeWithdrawal(int withdrawal)
	{
	
		if (withdrawal <= this->_amount && withdrawal > 0)
		{
			this->_nbWithdrawals++;
			Account::_totalNbWithdrawals++;
			return (true);
		}
		return (false);
	}

	int Account::checkAmount (void) const 
	{
		return (this->_amount);
	}

	void Account::displayStatus(void) const
	{
		std::cout <<  _accountIndex<< std::endl;
		std::cout << _amount << std::endl;
		std::cout << _nbDeposits << std::endl;
		std::cout << _nbWithdrawals << std::endl;
	}

	//Destructor
	Account::~Account() {}

	//STATIC
	int	Account::getNbAccounts( void )
	{
		return (Account::_nbAccounts);
	}

	int	Account::getTotalAmount( void )
	{
		return (Account::_totalAmount);
	}

	int	Account::getNbDeposits( void )
	{
		return (Account::_totalNbDeposits);
	}

	int	 Account::getNbWithdrawals( void )
	{
		return (Account::_totalNbWithdrawals);
	}

	void	Account::displayAccountsInfos( void )
	{
		std::cout << getNbAccounts() << std::endl;
		std::cout << getTotalAmount() << std::endl;
		std::cout << getNbDeposits() << std::endl;
		std::cout << getNbWithdrawals() << std::endl;
	}
