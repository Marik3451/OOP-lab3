#pragma once
#include <string>
#include "InvalidGenderException.h"
#include <iostream>
using namespace std;
class Osoba
{
public:
	
    enum class Genger 
    {
        male, female
    };
	static Genger getGengerFromString(string string);
    static string getName(Genger genger);
private:
	string first_name;
	string last_name;
	string surname;
	Genger genger;
	string birthday;
public:
	Osoba();
	string getFirst_name();
	void setFirst_name(string value);
	string getLast_name();
	void setLast_name(string value);
	string getSurname();
	void setSurname(string value);
    Genger getGenger();
    string getBirthday();

    friend ostream& operator<<(ostream& output, const Osoba& osoba);
    
    friend istream& operator>>(istream& input,Osoba& osoba);

};

