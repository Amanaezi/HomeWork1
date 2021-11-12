#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));

	int A, B, N, num;
	cin >> A >> B >> N;
	int sum = 0;

	for (int i = 0; i <= N; i++)
	{
		num = rand() % B + A;
		if (num % 2 == 0)
		{
			sum += num;
		}
	}

	cout << sum;
}