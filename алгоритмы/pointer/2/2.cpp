#include <iostream>

int main()
{
	int number1;
	int number2;
	std::cin >> number1 >> number2;

	int* pnumber1 = &number1;
	int* pnumber2 = &number2;

	int reworked_number1 = *(pnumber1);
	int reworked_number2 = *(pnumber2);

	std::cout <<  reworked_number1 + reworked_number2 << std::endl;
}