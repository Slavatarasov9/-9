#include <iostream>


int main()
{
	int number, result = 1;
	std::cout << "enter the number: ";
	std::cin >> number;
	int* pfactorial = &number;
	int* presult = &result;
	for (int i = 1; i <= *pfactorial; i++)
	{
		*presult *= i;
	}
	
	std::cout << "factorial form number: " << number << " \nanswer: " << result << "\n";
}