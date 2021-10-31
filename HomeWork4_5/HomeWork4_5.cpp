#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int count = 1;
	int n, n1;

	cin >> n;
	n1 = n;

	while (n1 /= 10)
	{
		count++;
	}
 
	if (count % 2 == 0)
	{
		 count = 0;
	}  
	else
	{
		 count = 1;
	}

	for (; n; n /= 10, count++)
	{
		if (count % 2 == 0)
		{
			sum = sum + (n % 10);
		}
	}

	/*
	float x;
	cin >> x;
	int sum = (int)((x / 10000 - (int)(x / 10000)) * 10) + (int)((x / 100 - (int)(x / 100)) * 10);
	*/

	cout << sum << endl;
}