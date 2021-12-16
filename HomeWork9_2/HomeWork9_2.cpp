#include <iostream>
using namespace std;

void rec(int a, int b)
{
	if (a == 1)
	{
		return;
	}

	for (;; b++)
	{
		if (a % b == 0)
		{
			cout << b << " ";
			rec(a / b, b);
			return;
		}
	}
}

int main()
{
	int a;
	cin >> a;
	rec(a, 2);
}
