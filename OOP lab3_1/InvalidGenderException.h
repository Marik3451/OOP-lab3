#pragma once
#include <string>
using namespace std;
class InvalidGenderException
{
	string message;
public:
	InvalidGenderException(string message);
	string getMessage();
		
};

