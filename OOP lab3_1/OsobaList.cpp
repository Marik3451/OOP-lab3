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
		throw NotFoundedException(std::string("Особу з ім'ям: ") + first_name + " і прізвищем: " + last_name + " незнайдено!");
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
		throw NotFoundedException(std::string("Особа з ім'ям по-батьтькові: ") + surname + " незнайдено!");
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
		throw NotFoundedException(std::string("Особу з статтю: ") + Osoba::getName(gender) + " незнайдено!");
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