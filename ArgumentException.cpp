#include "ArgumentException.h"

ArgumentException::ArgumentException(const char* msg) : _msg(msg)
{
}

const char* ArgumentException::what() const noexcept
{
	return _msg;
}
