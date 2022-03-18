#include "Person.h"


Person::Person() {
	Voornaam = "Kevin";
	Achternaam = "Assink";
	float lengte = 1.88;
	int Gewicht = 80;
	GeboorteJaar = "03/12/1999 | 3 december 1999";
	Geboorteplaats = "Almere Buiten";
	int HuisNummer = 19;
	Woonplaats = "Bouwmeesterbuurt";
	Postcode = "1333 LR"
	int Age = 22;
	school = "MA";
}

Person::~Person() {
}

void Person::SetFather(Person* aPerson) {
	Father = aPerson;
}
void Person::SetMother(Person* aPerson) {
	Mother = aPerson;
}
void Person::SetName(std::string aName) {
	Name = aName;
}
void Person::SetSurName(std::string aName) {
	SurName = aName;
}

