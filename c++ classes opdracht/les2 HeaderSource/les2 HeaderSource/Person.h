#pragma once
#include <string>
class Person
{
public:
	Person();
	~Person();

	int Age(int a);


private:
	std::string name;

protected:
	std::string school;
};