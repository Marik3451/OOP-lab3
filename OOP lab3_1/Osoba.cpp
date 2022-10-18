#include "Osoba.h"
Osoba::Genger Osoba::getGengerFromString(string string)
{
	if (string == "������")
	{
		return Genger::male;
	}
	else if (string == "����")
	{
		return Genger::female;
	}
	else {
		throw InvalidGenderException(std::string("���� �������� �����: ") + string);
	}
	return Genger();
}

string Osoba::getName(Osoba::Genger genger)
{
	if (genger == Genger::male)
	{
		return "������";
	}
	else
	{
		return "����";
	}
}


ostream& operator<<(ostream& output, const Osoba& osoba)
{
	output << "��'�: " << osoba.first_name << endl;
	output << "�������: " << osoba.last_name << endl;
	output << "��-�������: " << osoba.surname << endl;
	output << "�����: " << Osoba::getName(osoba.genger)<<endl;
	output << "���� ����������: " << osoba.birthday << endl;
	return output;
}



istream& operator>>(istream& input,Osoba& osoba)
{
	cout << "\n\t������ ��'�: ";
	getline(cin, osoba.first_name);
	
	cout << "\t������ �������: ";
	getline(cin,osoba.last_name);

	cout << "\t������ ��-�������: ";
	getline(cin,osoba.surname);

	while(true)
    {
		cout << "\t������ �����: ";
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


	cout << "\t������ ���� ����������: ";
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


