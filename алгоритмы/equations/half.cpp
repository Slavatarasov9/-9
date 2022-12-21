#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "Russian");

	double a = 0; double b = 1;
	double c;

	while (((b - a) / 2) > 0.000001)
	{
		c = (a + b) / 2;

		if ((sqrt(1 - 0.4 * a * a) - asin(a)) * (sqrt(1 - 0.4 * c * c) - asin(c)) < 0)
		{
			b = c;
		}
		else
		{
			a = c;
		}

	}

	std::cout << "Корень равен: " << c;
}