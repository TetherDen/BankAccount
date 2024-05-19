#pragma once
#include "BankAccount.h"
#include "ArgumentException.h"
#include "InsufficientFundsException.h"

class ATM
{
public:
	void depositMoney(BankAccount& obj,double value);
	void withdrawMoney(BankAccount& obj, double value);
	void show(BankAccount& obj)const;

};


