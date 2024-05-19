#include "InsufficientFundsException.h"

InsufficientFundsException::InsufficientFundsException(const char* msg) : _msg(msg)
{
}

const char* InsufficientFundsException::what() const noexcept
{
	return _msg;
}
