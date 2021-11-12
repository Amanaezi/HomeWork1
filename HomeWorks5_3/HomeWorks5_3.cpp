#include <iostream>
using namespace std;

int main()
{
	for (int i = -10; i <= 10; i++) 
	{
		int n = (cos(asin(1.0 / 10 * abs(i))) * 10);

		for (int j = 0; j <= 10 - n; ++j) 
		{ 
			cout << " ";
		}

		for (int j = 0; j <= 2 * n; ++j) 
		{ 
			cout << "*"; 
		}

		cout << endl;
    }
}