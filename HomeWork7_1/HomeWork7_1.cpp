﻿#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	bool b = true;

	while (b) 
	{
		++n;
		int s = n;
		vector<int>a(10);

		while (s) 
		{
			a[s % 10]++;
			s /= 10;
		}

		for (int i = 0; i < a.size(); ++i) 
		{
			if (a[i] > 1)
				b = false;
		}

		if (!b)
		{
			b = true;
		}
		else
		{
			b = false;
		}
	}

	cout << n;
}