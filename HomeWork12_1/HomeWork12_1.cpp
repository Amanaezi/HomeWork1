#include <iostream>
using namespace std;

int main()
{
	int t, n, a = 0, b = 0;
	cin >> t;

	while (t--)
	{
		cin >> n;
		int* number = new int[n];

		for (int i = 0; i < n; i++)
		{
			cin >> number[i];
			if (number[i] % 2 != i % 2)
			{
				if (i % 2 == 0)
				{
					a++;
				}
				else
				{
					b++;
				}
			}
		}

		if (a != b)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << a << endl;
		}

		a = 0;
		b = 0;
		delete[] number;
	}
}