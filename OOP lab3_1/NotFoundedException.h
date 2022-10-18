#pragma once;
#include <string>
using namespace std;
class NotFoundedException
{
	string message;
public:
	NotFoundedException(string message);
	string getMessage();

};

