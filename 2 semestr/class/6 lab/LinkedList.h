#include <iostream>
#include <algorithm>			
using namespace std;




struct Point
{
	int num = 0;			
	Point* next = nullptr;	
};

class Iterator
{
	friend class LinkedList;	
private:
	Point* elem = nullptr;		
public:
	Iterator() { elem = nullptr; }
	Iterator(const Iterator& it) { elem = it.elem; };
	bool operator == (const Iterator& it) { return elem == it.elem; }
	bool operator != (const Iterator& it) { return elem != it.elem; }
	void operator ++ () { elem = elem->next; };		
	void operator ++ (int) { elem = elem->next; };	
	Iterator& operator + (int n)
	{
		for (int i = 0; i < n && elem->next != nullptr; i++)
			elem = elem->next;
		return *this;
	}
	int operator * () const { return elem->num; };   
};

class LinkedList
{
	Iterator beg, end;									
	size_t size = 0;								
	Point* head = nullptr;								
	Point* top = nullptr;								

	friend ostream& operator<<(ostream& out, const LinkedList& list);
	friend istream& operator>>(istream& in, LinkedList& list);
	void output(Point* obj) const;
public:
	void show() const;

private:
	Point* get_obj(int num);						
	void push_before_obj(int k, int num, Point* obj);	
public:
	LinkedList();										
	LinkedList(size_t s, int k);					
	~LinkedList();								
	LinkedList(const LinkedList& list);				
	int& operator [](int index) const;				
	LinkedList& operator =(const LinkedList& list);	
	LinkedList operator * (LinkedList& list);			
	int operator ()() { return size; };					
	void push(int k);									
	int pop();											
	Iterator first() { return beg; }					
	Iterator last() { return end; }						
	void push_before(int k, int num);					

};