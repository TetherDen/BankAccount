#include "ATM.h"

void ATM::depositMoney(BankAccount& obj,double value)
{
	try
	{
		obj.deposit(value);
	}
	catch (const ArgumentException& err)
	{
		cerr << "Error " << err.what() << endl;
	}
	catch (const InsufficientFundsException& err)
	{
		cerr << "Error " << err.what() << endl;
	}
}

void ATM::withdrawMoney(BankAccount& obj, double value)
{
	try
	{
		obj.withdraw(value);
	}
	catch (const ArgumentException& err)
	{
		cerr << "Error " << err.what() << endl;
	}
	catch (const InsufficientFundsException& err)
	{
		cerr << "Error " << err.what() << endl;
	}

}

void ATM::show(BankAccount& obj) const
{
	obj.show();
}
