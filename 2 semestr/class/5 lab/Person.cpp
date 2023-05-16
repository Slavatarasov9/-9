#include <iostream>
#include "Person.h"
#include <string>

Person::Person()
{
	Name = "";
	Age = 0;
}
Person::Person(std::string name, int age)
{
	Name = name;
	Age = age;
}
Person::Person(Person& t)
{
	Name = t.Name;
	Age = t.Age;
}
Person::~Person() {};
std::string Person::getName()
{
	return Name;
}
int Person::getAge()
{
	return Age;
}
void Person::setName(std::string name)
{
	Name = name;
}
void Person::getAge(int age)
{
	Age = age;
}
std::istream& operator>>(std::istream& in, Person& p)
{
	std::cout << "???: "; in >> p.Name;
	std::cout << "???????: "; in >> p.Age;
	return in;
}
std::ostream& operator<<(std::ostream& out, const Person& p)
{
	return (out << "E: " << p.Name << "\n" << "A: " << p.Age << "\n");
}
Person& Person::operator=(const Person& t)
{
	if (&t == this)
	{
		return *this;
	}
	Name = t.Name;
	Age = t.Age;
	return *this;
}
void Person::Show()
{
	std::cout << "E: " << Name << "\n" << "A: " << Age << "\n";
}