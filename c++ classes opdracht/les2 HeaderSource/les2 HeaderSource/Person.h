#pragma once
#include <string>
class Person
{
public:
	Person();
	~Person();

	void SetMother(Person* aPerson);
	void SetFather(Person* aPerson);
	void SetName(std::string aName);
	void SetSurName(std::string aName);

	


private:
	std::string name;
	std::string SurName;

	Person* Father;
	Person* Mother;

	std::string Voornaam;
	std::string Achternaam;
	std::string Geboorteplaats;
	std::string GeboorteJaar;
	std::string Straatnaam;
	std::string Woonplaats;
	std::string Postcode;

	int HuisNummer;
	float lengte;
	int Gewicht;
	int Age;

protected:
	std::string school;
};