#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);

	char a[500];
	strcpy(a, str.c_str());
	int i, b;

	for (i = 0; i < str.length(); i++)
	{
		a[i] = str[i];
	}
			for (i = 0; i < str.length() / 2; i++) 
			{
				
					b = a[i]; 
					a[i] = a[str.length() - i - 1];
					a[str.length() - i - 1] = b;
			}

			for (i = 0; i < str.length(); i++)
			{
				cout << a[i];
			}
}