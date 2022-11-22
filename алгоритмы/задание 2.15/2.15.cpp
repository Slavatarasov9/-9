#include <iostream>
using namespace std;
int main()
{
    int n, s, k;
bool flag = false;

cin >> n >> s;

while (n > 0 && !flag)
{
    k = n % 10;
    if (k == s)
    {
        flag = true;
        cout << "Цифра найдена" << endl;
    }
    else
    {
        n /= 10;
    }
}

if (!flag)
{
    cout << "Цифра не найдена" << endl;
}
}