#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int i = x / 2;

	for (; i > 0; i--)
	{
		if (x % i == 0)
		{
			break;
		}
	}

	cout << i << endl;
}