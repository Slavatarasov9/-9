#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	int numofspaces;
	cout << "Vvedite chislo N(naturalnoe) > 2" << endl;
	cin >> n;

	if (n <= 2)
	{
		cout << "Vvedite korrektnoe znachenie N" << endl;
	}

	numofspaces = n;

	for (int i = 1; i <= n; i++)
	{
		numofspaces--;

		for (int j = 1; j <= numofspaces; j++)
		{
			cout << " ";
		}

		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}

		cout << endl;

	}
}