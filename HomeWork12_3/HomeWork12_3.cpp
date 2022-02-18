#include <iostream>
#include <string>
using namespace std;

int main() 
{
	int n; 
	cin >> n;

	for (int j = 0; j < n; j++) 
	{
		string s;
		cin >> s;

		int res, type1 = 0, type2 = 0;

		for (int i = 0; i < s.size(); i++) 
		{
			if (s[i] == '(') 
			{
				type1++;
			}
			else if (s[i] == '[')
			{
				type2++;
			}
			else if (type1 > 0 && s[i] == ')') 
			{
				res++;
				type1--;
			}
			else if (type2 > 0 && s[i] == ']') 
			{
				res++;
				type2--;
			}
		}

		cout << res << endl;
		res = 0;
	}
}
