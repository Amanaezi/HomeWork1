#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;

	/*int mask = x >> sizeof(int) * CHAR_BIT - 1;
	int r = (x + mask) ^ mask;
	cout << r << endl;
	*/

	if (x > 0)
	{
		cout << x << endl;
	}
	else
	{
		cout << x * -1 << endl;
	}
}
