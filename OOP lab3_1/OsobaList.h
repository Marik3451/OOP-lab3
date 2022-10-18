#pragma once
#include "Osoba.h"
#include "NotFoundedException.h"
#include <vector>
class OsobaList
{
	std::vector<Osoba> osobaList;
public:
	vector<Osoba> searchBy(string first_name,string last_name);
	vector<Osoba> searchBy(string surname);
	vector<Osoba> searchBy(Osoba::Genger gender);
	void FillOsobaList();

};