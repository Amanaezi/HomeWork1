#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string s;
	ifstream input("input.txt");
	getline(input, s);

	char char_array[500];
	strcpy(char_array, s.c_str());
	char* ch = strtok(char_array, " ,.!?");

	char check[500];
	bool b;

	int res = 0;

	while (ch != NULL)
	{
		s = ch;

		for (int i = 0; i <= s.length(); i++)
		{
			check[i] = s[i];
		}

		for (int i = s.length() - 1, j = 0; i >= 0; i--, j++) 
		{
			if (check[j] == s[i])
			{
				b = true;
			}
			else
			{
				b = false;
				break;
			}
			
		}

		if (b)
		{
			res++;
		}

		ch = strtok(NULL, ".!?");
	}

	cout << res;
	ofstream output("output.txt");
	output << res;
}