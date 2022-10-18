#include "OsobaList.h"

vector<Osoba> OsobaList::searchBy(string first_name, string last_name)
{
	vector<Osoba> searchResult = vector<Osoba>();
	for (auto osoba : osobaList)
	{
		if (osoba.getFirst_name() == first_name && osoba.getLast_name() == last_name)
		{
			searchResult.push_back(osoba);
		}
	   
	}
	if (searchResult.empty())
	{
		throw NotFoundedException(std::string("����� � ��'��: ") + first_name + " � ��������: " + last_name + " ����������!");
	}
	return searchResult;
	
}

vector<Osoba> OsobaList::searchBy(string surname)
{
	vector<Osoba> searchResult = vector<Osoba>();
	for (auto osoba : osobaList)
	{
		if (osoba.getSurname() == surname)
		{
			searchResult.push_back(osoba);
		}
		
	}
	if (searchResult.empty())
	{
		throw NotFoundedException(std::string("����� � ��'�� ��-���������: ") + surname + " ����������!");
	}
	return searchResult;
	
}


vector<Osoba> OsobaList::searchBy(Osoba::Genger gender)
{
	vector<Osoba> searchResult= vector<Osoba>();
	for (auto osoba : osobaList)
	{
		if (Osoba::getName(osoba.getGenger()) == Osoba::getName(gender))
		{
			searchResult.push_back(osoba);
		}

	}
	if (searchResult.empty())
	{
		throw NotFoundedException(std::string("����� � ������: ") + Osoba::getName(gender) + " ����������!");
	}
	return searchResult;
}

void OsobaList::FillOsobaList()
{
	for (int i = 0; i < 1; i++)
	{
		Osoba osoba = Osoba();
		cin >> osoba;
		osobaList.push_back(osoba);
	}
}