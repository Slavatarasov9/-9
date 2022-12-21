#include <iostream>

int main()
{
    int number1, number2;
    std::cin >> number1 >> number2;
    int* pt1 = &number1;
    int* pt2 = &number2;

    std::cout << "number 1:\t" << number1 << std::endl;
    std::cout << "number 2:\t" << number2 << std::endl;

    std::cout << "swapped:" << std::endl;

    int temp = *pt1;
    *pt1 = *pt2;
    *pt2 = temp;

    std::cout << "number 1:\t" << *pt1 << std::endl;
    std::cout << "number 2:\t" << *pt2 << std::endl;
}