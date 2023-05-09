#include <iostream>
#include "linear_equation.h"
using namespace std;

int main() {
	linear_equation Equation;
	Equation.Init(3, 17);
	Equation.Show();
	Equation.function(5);
	Equation.Read();
	Equation.Show();
	Equation.function(3);
	return 0;
}