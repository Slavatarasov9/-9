#pragma once
#include "Point.h"
#include <iostream>

Point::Point()
{
	FIO = "";
	this->salary = 0;
	this->award = 0;
}
Point::Point(std::string name, double salary, int award)
{
	FIO = name;
	this->salary = salary;
	this->award = award;
}
Point::Point(const Point& obj)
{
	this->FIO = obj.FIO;
	this->salary = obj.salary;
	this->award = obj.award;
}
Point::~Point()
{
	std::cout << this << std::endl;
}
double Point::get_salary()
{
	return salary;
}
void Point::set_salary(double salary)
{
	this->salary = salary;
}
int Point::get_award()
{
	return award;
}
void Point::set_award(int award)
{
	this->award = award;
}
void Point::show()
{
	std::cout << "FIO: " << FIO << std::endl << "salary: " << salary << std::endl << "award: " << award << std::endl;
}