#include "InvalidGenderException.h"

InvalidGenderException::InvalidGenderException(string message)
{
	this->message = message;
}

string InvalidGenderException::getMessage()
{
	return message;
}
