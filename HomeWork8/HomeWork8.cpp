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
	string res = ch;

	
	while (ch != NULL)
	{
		string str1 = ch;

		while (n < str1.length())
		{
			n++;
		}

		if (n > res.length())
		{
			res = ch;
		}

		n = 0;
		ch = strtok(NULL, " ,.-!?");
	}

	cout << res;
}