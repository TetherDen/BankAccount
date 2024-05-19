#include "BankAccount.h"
#include "ArgumentException.h"
#include "InsufficientFundsException.h"

const double BankAccount::maxCredit = 10000;
unsigned int BankAccount::counterObject ;


BankAccount::BankAccount(string name,string sName, double balance, bool credit, double credBalance)
	:_name(name),_sName(sName),_balance(balance),_credit(credit),_creditBalance(credBalance)
{
	++counterObject;
	accountNumber -= counterObject;
}

void BankAccount::show() const
{
	cout << "Account number: " << accountNumber << endl;
	cout << "Name: " << _name << "	 Surname: " << _sName << endl;
	cout << "Balance: " << _balance << endl;
	cout << "Is credit open?: " << _credit << endl;
	cout << "Credit dept: " << _creditBalance << endl;
	if (_credit)
	{
		cout << "Max credit amount: " << maxCredit << endl << endl;
	}


}

void BankAccount::deposit(double dep)
{
	if (dep > 0)
	{
		double temp;
		if (_credit)
		{
			if (_creditBalance > dep)
			{
				temp = dep;
			}
			else
			{
				temp = _creditBalance;
			}
			_creditBalance -= temp;
			dep -= temp;
		}
		_balance += dep;
	}
	else
	{
		throw ArgumentException("Deposite must be > 0. \n");
	}
}

void BankAccount::withdraw(double withdraw)
{
	if (withdraw > 0)
	{
		if (withdraw <= _balance)
		{
			_balance -= withdraw;
		}
		else if (_credit)
		{
			double total = _balance+( maxCredit - _creditBalance);
			if (total >= withdraw)
			{
				double addToCredit = withdraw - _balance;
				_balance = 0;
				_creditBalance += addToCredit;
			}
			else
			{
				throw InsufficientFundsException("Insufficient funds for withdrawal. \n");
			}
		}
		else
		{
			throw InsufficientFundsException("Insufficient funds for withdrawal. \n");
		}
	}
	else
	{
		throw ArgumentException("Withdraw must be > 0. \n");
	}
}
