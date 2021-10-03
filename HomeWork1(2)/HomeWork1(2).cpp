#include <iostream>
using namespace std;

int main()
{
	int x;

	for (cin >> x; x > 0; x /= 10)
	{
		int res = x % 10;
		cout << res;
	}
}