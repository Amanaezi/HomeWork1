#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;

	if (x % 2 == 0 && x >= 10 && x <= 99)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}