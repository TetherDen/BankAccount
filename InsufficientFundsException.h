#pragma once
#include <iostream>
using namespace std;
#include <stdexcept>

class InsufficientFundsException : public exception
{
	const char* _msg;
public:
	InsufficientFundsException(const char* msg);
	const char* what() const noexcept override;
};

