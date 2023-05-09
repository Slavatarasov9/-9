#include <iostream>
#include "linear_equation.h"
using namespace std;

void linear_equation::Read() {
	cout << "enter first and second values: ";
	cin >> first >> second;
}
void  linear_equation::Show() {
	cout << "first = " << first << endl;
	cout << "second = " << second << endl;
}

void linear_equation::Init(float A, float B) {
	first = A;
	second = B;
}

void linear_equation::function(double x) {
	if (first != 0) {
		double y = first * x + second;
		cout << "the equation = " << y << endl;
	}
	else {
		cout << "y = second = " << second << endl;
	}
}