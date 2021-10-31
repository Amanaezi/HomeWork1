#include <iostream>
using namespace std;

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;

	for (int i = 1; i <= 5; i++)
	{

		for (int j = 1; j <= i; j++)
		{
			cout << a << "  " << b << "  " << c << "  ";
		}

		cout << endl;
	}
}