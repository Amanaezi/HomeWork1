#include <iostream>
using namespace std;

int main()
{
	int x = 0;

	for (int i = 1; i <= 100; i++)
	{
		x += i;
	}
	cout << x << endl;
	x /= 100;
	cout << x;
}