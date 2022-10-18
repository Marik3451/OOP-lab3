#include <conio.h>
#include"OsobaList.h"
#include "Windows.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	OsobaList list=OsobaList();
	list.FillOsobaList();
	string first_name,last_name,surname,gender;
	cout << "������ ��'� : ";
	getline(cin, first_name);
	cout << "������ �������: ";
	getline(cin, last_name);
	try
	{
		auto searchResult = list.searchBy(first_name,last_name);
		for (auto osoba : searchResult)
		{
			cout << osoba << endl;
		}
	}
	catch (NotFoundedException e)
	{
		cout << e.getMessage() << endl;
	}
	cout << "������ ��-�������: ";
	getline(cin, surname);
	try
	{
		auto searchResult = list.searchBy(surname);
		for (auto osoba : searchResult)
		{
			cout << osoba << endl;
		}
	}
	catch (NotFoundedException e)
	{
		cout << e.getMessage() << endl;
	}
	cout << "������ c����: ";
	getline(cin, gender);
	try
	{
		auto searchResult=list.searchBy(Osoba::getGengerFromString(gender));
		for (auto osoba : searchResult)
		{
			cout<<osoba<<endl;
		}
	}
	catch (NotFoundedException e)
	{
		cout << e.getMessage() << endl;
	}
}

