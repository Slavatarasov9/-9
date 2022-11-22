#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    float n;
    int numofspaces;
    int numofstars = 1;
    cout << "Vvedite nechetnoe chislo N >3" << endl;
    cin >> n;

    if ((n <= 3) || ((int)n % 2 != 1))
    {
        cout << "Vvedite korrektnoe znachenie N" << endl;
    }

    numofspaces = n / 2;
    cout << endl;

    for (int i = 1; i <= n; i += 2)
    {
        for (int j = 1; j <= numofspaces; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= numofstars; j++)
        {
            cout << "*";
        }

        cout << endl;

        numofspaces--;
        numofstars += 2;
    }

}