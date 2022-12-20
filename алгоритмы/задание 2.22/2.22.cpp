#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float n, a, max;
    int i = 2;
    int numFirst = 1;
    int numLast = 1;

    cin >> n;

    max = sin(n + 1/n);

    while (i <= n)
    {
        a = sin(n + 1/n);
        if (a > max)
        {
            max = a;
            numFirst = i;
            numLast = i;
        }
        else if (a == max)
        {
            numLast = i;
        }
        i++;
    }
    cout << "Максимальный элемент: " << max << endl;
    cout << "№ Первого элемента с этим значением: " << numFirst << endl;
    cout << "№ последнего элемента с этим значением: " << numLast << endl;
}

