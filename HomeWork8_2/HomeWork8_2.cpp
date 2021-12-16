#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	string s;
	getline(cin, s);

	char char_array[200];
	strcpy(char_array, s.c_str());

	char* ch = strtok(char_array, " ,.-!?");
	int n = 0;
	int res = 0;

	while (ch != NULL)
	{
		string str1 = ch;

		while (n < str1.length())
		{
			n++;
		}

		for (int i = 1, j = 0; i <= str1.length(); i++)
		{
			if (str1[i] == str1[j])
			{
				n = 0;
			}
			for (int m = str1.length() - 1; m >= 0;m--)
			{
				if (str1[i] == str1[m] && i != m)
				{
					n = 0;
				}
			}		
		}

		if (n > res)
		{
			res = n;
		}
		ch = strtok(NULL, " ,.-!?");
	}

	cout << res;
}