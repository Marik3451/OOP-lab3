#include "Osoba.h"
Osoba::Genger Osoba::getGengerFromString(string string)
{
	if (string == "чоловік")
	{
		return Genger::male;
	}
	else if (string == "жінка")
	{
		return Genger::female;
	}
	else {
		throw InvalidGenderException(std::string("Дано неіснуючу стать: ") + string);
	}
	return Genger();
}

string Osoba::getName(Osoba::Genger genger)
{
	if (genger == Genger::male)
	{
		return "чоловік";
	}
	else
	{
		return "жінка";
	}
}


ostream& operator<<(ostream& output, const Osoba& osoba)
{
	output << "Ім'я: " << osoba.first_name << endl;
	output << "Прізвище: " << osoba.last_name << endl;
	output << "По-батькові: " << osoba.surname << endl;
	output << "Стать: " << Osoba::getName(osoba.genger)<<endl;
	output << "Дата народження: " << osoba.birthday << endl;
	return output;
}



istream& operator>>(istream& input,Osoba& osoba)
{
	cout << "\n\tВведіть ім'я: ";
	getline(cin, osoba.first_name);
	
	cout << "\tВведіть прізвище: ";
	getline(cin,osoba.last_name);

	cout << "\tВведіть По-батькові: ";
	getline(cin,osoba.surname);

	while(true)
    {
		cout << "\tВведіть стать: ";
		string enteredValue;
		getline(cin,enteredValue);
		try 
		{
			osoba.genger = Osoba::getGengerFromString(enteredValue);
			break;
		}
		catch (InvalidGenderException e)
		{
			cout << e.getMessage() << endl;
		}
    } 


	cout << "\tВведіть дату народження: ";
	getline(cin, osoba.birthday);
	

	cout << endl;
	return input;
}


Osoba::Osoba()
{

}

Osoba::Genger Osoba::getGenger()
{
	return genger;
}

string Osoba::getFirst_name()
{
	return first_name;
}
void Osoba::setFirst_name(string value)
{
	first_name = value;
}
string Osoba::getLast_name()
{
	return  last_name;
}
void Osoba::setLast_name(string value)
{
	last_name = value;
}
string Osoba::getSurname()
{
	return  surname;
}
void Osoba::setSurname(string value)
{
	surname = value;
}


