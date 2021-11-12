#include <iostream>
using namespace std;

int main()
{
	int num, count = 0;
	cin >> num;

	if (num > 0)
	{
		while (num > 0)
		{
			num -= 2;
			count++;
		}
	}
	else
	{
		cout << "Error!";
	}

	/*if (num > 0)
	{
		for (num; num > 0; num--)
		{
			if (num % 2 == 0)
			{
				count++;
			}
		}
	}
	else
	{
		cout << "Error!";
	}*/

	cout << count << endl;
}