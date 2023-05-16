#pragma once
#pragma once
#include "Object.h"


class Person :
	public Object
{
protected:
	string name;
	int age;
	friend istream& operator>>(istream& in, Person& p);			
	friend ostream& operator<<(ostream& out, const Person& p);	
public:
	void set_name(string name);								
	void set_age(int age);										
	string get_name();						
	int get_age();						
	Person();												
	Person(string name, int age);			
	Person(const Person& p);				
	~Person();	
	void Show();
	void HandleEvent(const TEvent& e);
	int AvgAge() { return age; }

};
