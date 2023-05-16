#include <iostream>
#include "Person.h"
#include <string>

class Student : public Person
{
	int Year;
public:
	Student(void);
	Student(std::string, int, int);
	~Student(void);
	Student(Student&);
	void setYear(int);
	int getYear(void);
	int increase_year_of_study(void);
	friend std::istream& operator>>(std::istream& in, Student& t);
	friend std::ostream& operator<<(std::ostream& out, const Student& t);
	Student& operator=(const Student&);
	void Show();
};