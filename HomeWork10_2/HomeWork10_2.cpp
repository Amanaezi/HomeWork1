#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main()
{
	/*
	int arr[10];
	int res;
	srand(time(NULL));
	int min = 1, max = 55;

	int* p = arr;
	for (int i = 0; i < 10; i++)
	{
		*p = rand() % (max - min + 1) + min;
		p++;
	}

	p = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << *p << endl;
		p++;
	}

	cout << endl;

	p = arr;
	for (int i = 0; i < 10; i++)
	{
		if (i == 2)
		{
			*p = rand() % (max - min + 1) + min;
		}
		cout << *p << endl;
		p++;
	}
	*/

	string str;
	getline(cin, str);

	char arr[500];
	strcpy(arr, str.c_str());

	char ch3;
	cin >> ch3;

	char* p = arr;

	for (int i = 0; i < str.length(); i++)
	{
		*p = str[i];
		p++;
	}

	p = arr;
	for (int i = 0; i < str.length(); i++)
	{
		if (i == 2)
		{
			*p = ch3;
		}
		cout << *p;
		p++;
	}
}