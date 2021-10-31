#include <iostream>
using namespace std;

int main()
{
	double res = 1;

	for (int i = 5; i <= 95; i += 5)
	{
		res = res * sqrt(i);
	}

	cout << res << endl;
}