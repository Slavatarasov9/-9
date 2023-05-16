#include <iostream>
#include "Money.h"
using namespace std;

int main()
{
	Money A, B;
	cin >> A; 
	cout << "Object A: " << A << endl; 
	B = A; 
	cout << "Object B: " << B << endl; 

	double factor;
	cout << "Enter a factor: ";
	cin >> factor;
	Money C = A * factor; 
	cout << "Object C = " << C << endl; 

	int divider;
	cout << "Enter a divider: ";
	cin >> divider;

	Money D = A / divider; 
	cout << "Object D = " <<  D << endl; 
	return 0;
}