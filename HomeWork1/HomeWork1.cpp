#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;

	int a = x / 100;
	int b = x / 10 % 10;
	int c = x % 10;

	int res = a + b + c;
	cout << res << endl;
}