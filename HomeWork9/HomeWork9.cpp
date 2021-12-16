#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string s;
	getline(cin, s);

	char char_array[500];
	strcpy(char_array, s.c_str());
	char* ch = strtok(char_array, ".!?");

	while (ch != NULL)
	{
		string str = ch;
		string res = str.substr(0, str.find_first_of(' '));

		cout << res << " ";
		ch = strtok(NULL, ".!?");
	}
}