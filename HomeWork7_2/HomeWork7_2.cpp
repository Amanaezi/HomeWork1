#include <iostream>
using namespace std;

int main()
{
	int n;
	int i, p, v, t, rx = 0;
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> p >> v >> t;

		if (p + v + t > 1)
		{
			rx++;
		}
	}

	cout << rx;
}