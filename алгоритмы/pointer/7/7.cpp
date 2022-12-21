#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	std::cout << a << std::endl;
	int* pa = &a;
	int b;
	std::cin >> b;
	int* pb = &b;
	*pa = *pb;
	std::cout << "the value of the number: " << *pa << std::endl;
	return 0;
}