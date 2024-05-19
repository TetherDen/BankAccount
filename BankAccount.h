#pragma once
#include <iostream>
using namespace std;

class BankAccount
{
	static const double maxCredit;   // = 10,000
	unsigned int accountNumber = 0 ;  // for unique acc number
	string _name;
	string _sName;
	double _balance;
	double _creditBalance;  // credit dept
	bool _credit ;		// is credit available

	static unsigned int counterObject;
public:
	BankAccount(string name,string _sName, double balance = 10000, bool credit = 1, double credBalance = 0);
	void show() const;
	void deposit(double dep);
	void withdraw(double withdraw);
	double getBalance() const;



};

