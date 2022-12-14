#include <cmath>
#include <iostream>

using namespace std;

int main()
{
float n, s, a;
int i = 1;
bool flag = false;

cin >> n >> s;

while (i <= n && !flag)
{
    a = sin(n + i / n);
    // для удобства проверки, не часть алгоритма
    a = round(a*10)/10;
    cout << n + i/n << "|" << a << endl;
    //конец удобства...
    if (a == s)
    {
        flag = true;
    }
    else
    {
        i++;
    }
}

if (flag)
{
    cout << "Элемент найден!" << endl;
    // Если нужен номер элемента в последовательности, просто выводим i
    // cout << ""Элемент найден! Его номер: " << i << endl;
}
else
{
    cout << "Элемент не найден!" << endl;
}
}
