#include "NotFoundedException.h"

NotFoundedException::NotFoundedException(string message)
{
	this->message = message;
}

string NotFoundedException::getMessage()
{
	return message;
}
