#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "Russian");		

	// f(x) = sqrt(1-0,4x^2) - arcsin x
	// f'(x) = -2x/sqrt(25-10x^2)-1/sqrt(1-x^2)
	// u(x) = y * (x^3 - x - 1) + x
	//[0;1]
	//r = max(|f'(a)|, |f'(b)|) = max(1, -) = 1
	//0 < y < 1, y = 0,5
	double y = 0.5;
	double eps = 0.000001;
	float x = 0; float x1 = 0.9;

	while (abs(x1 - x) > eps)
	{
		x = x1;
		x1 = y * (sqrt(1 - 0.4 * x * x) - asin(x)) + x;
	}

	std::cout << "Корень равен: " << x << std::endl;
}