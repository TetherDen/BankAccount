#include <iostream>
using namespace std;
#include <string>
#include <stdexcept>
#include "ArgumentException.h"
#include "InsufficientFundsException.h"
#include "BankAccount.h"
#include "ATM.h"


int main()
{
	BankAccount ba("Petro","Petrenko", 5000,1);
	ba.show();

	ATM atm;

	atm.depositMoney(ba, -100);		// exception Arrgument
	atm.withdrawMoney(ba, 20000);	// exception Insufficient funds

	atm.depositMoney(ba, 2000);
	atm.show(ba);

	atm.withdrawMoney(ba, 10000);
	atm.show(ba);

	atm.depositMoney(ba, 5000);
	atm.show(ba);


	return 0;
}


