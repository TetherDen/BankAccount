#pragma once
#include <iostream>
using namespace std;
#include <stdexcept>


class ArgumentException : public exception
{
	const char* _msg;
public:
	ArgumentException(const char* msg);
	const char* what() const noexcept override;

};

