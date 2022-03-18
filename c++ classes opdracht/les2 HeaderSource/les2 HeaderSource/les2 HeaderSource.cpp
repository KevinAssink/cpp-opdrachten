// les2 HeaderSource.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Person.h"


int main()
{
	Person kevin;
	kevin.SetName("Kevin");
	kevin.SetName("Assink");


	Person* eric = new Person();

	eric ->SetName("Eric");
	eric->SetSurName("Assink");

	keivn.SetFather(eric);

	Person* michelle = new Person();

	michelle->SetName("Michelle");
	michelle->SetSurName("Assink-Woolley");

	keivn.SetFather(michelle);
}

//Dit werkt nog niet helemaal want ik ben vergeten hoe je een class instantiate :P, maar
//volgens mij is dit wel zo ongeveer de opdracht min het hele instatiaten