#include <iostream>
using namespace std;
int main()
{
	int n, tmp, max;

cout << "Введите длину последовательности:" << endl;
cin >> n;

cout << "Введите первое число:" << endl;
cin >> max;

for (int i = 2; i <= n; i++)
{
    cout << "Введите следующее число:" << endl;
    cin >> tmp;
    if (tmp > max)
    {
        max = tmp;
    }
}
cout << "Максимальный элемент: " << max << endl;
}