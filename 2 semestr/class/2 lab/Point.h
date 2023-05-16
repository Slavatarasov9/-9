#pragma once
#include <string>;

class Point
{
public:
	std::string FIO;								   
	Point();										   
	Point(std::string name, double salary, int award); 
	Point(const Point& obj);						   
	~Point();										  
	double get_salary();						      
	void set_salary(double salary);					   
	int get_award();								 
	void set_award(int award);						  
	void show();									  
private:
	double salary;									 
	int award;
};