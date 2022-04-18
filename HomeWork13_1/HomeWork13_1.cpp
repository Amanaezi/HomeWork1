#include <iostream>
using namespace std;

int main()
{
    int n, res = 0;
    string str;
	cin >> n >> str;

	for (int i = 0; i < n; i++)
	{
		if (str[i] % 2 == 0)
		{
			res += (i + 1);
		}
	}

	cout << res;
}