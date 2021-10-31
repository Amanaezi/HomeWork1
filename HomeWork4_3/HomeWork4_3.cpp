#include <iostream>
using namespace std;

int main()
{
	double res = 0;

	for (int i = 95; i >= 5; i -= 5)
	{
		res = sqrt(res + sqrt(i));
	}

	cout << res << endl;
}