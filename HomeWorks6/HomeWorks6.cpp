#include <iostream>
#include "HomeWorks6.h"
using namespace std;

int AdditionFunction(int a, int b)
{
	int res = a + b;
	return res;
}

int main()
{
	int a, b, res;
	cin >> a >> b;
	res = AdditionFunction(a, b);
	cout << res << endl;
}