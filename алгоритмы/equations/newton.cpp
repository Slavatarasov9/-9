#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "Russian");
	//f(x) = sqrt(1-0.4x^2) - arcsin x
	//f'(x) = -2x/sqrt(25-10x^2)-1/sqrt(1-x^2)
	// f''(x) = -10/sqrt(25-10x^2)*(5-2x^2) - x/sqrt(1-x^2)*(1-x^2)
	//[0;1]
	//

	float a = 0; float b = 1;
	float xprev = 0; float x = 1;
	double eps = 0.000001;

	while (abs(x - xprev) > eps)
	{
		xprev = x;
		x = xprev - ((sqrt(1 - 0.4 * xprev * xprev) - asin(xprev)) / ((sqrt(25 - 10 * xprev * xprev)) - 1 / sqrt(1 - xprev * xprev)));
	} 

	std::cout << "Корень равен: " << x;
}