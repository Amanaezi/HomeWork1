#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n, res = 0, size;
	cout << "Введите диапазон чисел: ";
	cin >> n;

	cout << "Введите кол-во чисел: ";
	cin >> size;
	cout << endl;

	if (size > 500)
	{
		cout << "Вы ввели слишком большое кол-во чисел!" << endl;
		return 0;
	}

	int arr[500];
	srand(time(NULL));
	int min = 0, max = n;

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}

	cout << endl;

	for (int j = n; j >= 0; j--)
	{
		res = 0;

		for (int i = 0; i < size; i++)
		{
			if (arr[i] == j)
			{
				res++;
			}

			if (i == size - 1 && res != 0)
			{
				cout << j << " Встретилось в " << res << (res == 1 ? " случае" : " случаях") << endl;
			}
		}
	}
}