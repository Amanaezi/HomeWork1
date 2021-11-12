#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int b = 10;
	int r = 10;

	for (int x = -10; x <= 10; x++)
	{
		for (int y = -10; y <= 10; y++)
		{
			if (sqrt(pow(x, 2) + pow(y, 2)) == 10)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}

		cout << endl;
	}

	
}