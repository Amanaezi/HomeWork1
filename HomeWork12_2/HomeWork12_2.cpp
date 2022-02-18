#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) 
	{
		cin >> arr[i];
	}

	int last = n - 1;
	int first = 0;

	int Sergey = 0;
	int Dima = 0;

	for (int i = 0; i < n; i++) 
	{
		if (i % 2 == 0)
		{
			if (arr[last] > arr[first])
			{
				Sergey += arr[last];
				last--;
			}
			else if (arr[last] < arr[first]) 
			{
				Sergey += arr[first];
				first++;
			}
			else 
			{
				Sergey += arr[first];
			}
		}
		else 
		{
			if (arr[last] > arr[first])
			{
				Dima += arr[last];
				last--;
			}
			else if (arr[last] < arr[first]) 
			{
				Dima += arr[first];
				first++;
			}
			else 
			{
				Dima += arr[first];
			}
		}
	}
	cout << Sergey << " " << Dima;

	delete[] arr;
}