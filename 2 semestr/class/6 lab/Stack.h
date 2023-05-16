#pragma once
#include <iostream>
#include <string>
using namespace std;


class Stack
{
	struct Point
	{
		string data = "";
		Point* next = nullptr;
	};

	Point* head;							
	size_t size;								
	bool stack_is_empty()
	{
		return size == 0;
	}						
	void output(Point* obj);				
	void push_op(Point* obj);			

public:
	Stack() : head(nullptr), size(0) {}
	Stack(int n);
	Stack(const Stack& stack);
	Stack& operator=(const Stack& stack);		
	~Stack();
	string top() const { return head->data; }	
	void show();								
	void push(string str);						
	string pop();								

};