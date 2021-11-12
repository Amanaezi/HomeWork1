#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0 && i % 11 != 0)
		{
			cout << i << endl;
		}
	}
}