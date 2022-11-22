#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n, numofstars;
	
	cout << "Vvedite chislo N(naturalnoe) > 2" << endl;
	cin >> n;

	if (n <= 2)
	{
		cout << "Vvedite korrektnoe znachenie N" << endl;
	}

	numofstars = 1;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= numofstars; j++)
		{
			cout << "* ";
		}

		numofstars++;

		cout << endl;

	}
}