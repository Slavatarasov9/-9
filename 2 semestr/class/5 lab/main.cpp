#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Object.h"
#include "Vector.h"
#include <string>
#include <Windows.h>

void f1(Person& f)
{
	f.setName("a");
	std::cout << f << "\n";
}

Person f2()
{
	Student s(20, 3);
	return s;
}

int  main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Vector v(5);
	Person human1;
	std::cin >> human1;
	Student human2(18, 4);
	Object* p = &human1;
	v.Add(p);
	p = &human2;
	v.Add(p);
	std::cout << v;

	return 0;
}