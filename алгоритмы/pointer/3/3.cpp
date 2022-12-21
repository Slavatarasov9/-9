#include <iostream>

int main()
{
	float number1, number2;
	std::cin >> number1 >> number2;

	float* pnumber1 = &number1;
	float* pnumber2 = &number2;

	float reworked_number1 = *(pnumber1);
	float reworked_number2 = *(pnumber2);

	std::cout << reworked_number1 + reworked_number2 << std::endl;
}