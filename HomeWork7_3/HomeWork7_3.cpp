#include <iostream>
using namespace std;

int main()
{
	int n, res = 0;
	char s, t;
	cin >> n >> s;
	t = s;

	for (int i = 1; i < n; i++) 
	{
		cin >> s;

		if (s == t)
		{
			res++;
		}

		t = s;
	}

	cout << res;
}