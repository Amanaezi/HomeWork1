#include <iostream>
using namespace std;

int main()
{
	int day;
	cout << "Input day of week: ";
	cin >> day;

	const char* day_of_week[] = { "Понедельник",  "Вторник", "Среда", "Четверг", "Пятница", "Субота", "Воскресенье" };
	//cout << day_of_week[day - 1] << endl;

	for (int i = 0; i <= 7; i++)
	{
		if (day == i)
		{
			cout << day_of_week[i - 1];
		}
	}
	
	
	/*
	switch (day)
	{
	case 1:
		"Понедельник";
		break;

	case 2:
		cout << "Вторник";
		break;

	case 3:
		cout << "Среда";
		break;

	case 4:
		cout << "Четверг";
		break;

	case 5:
		cout << "Пятница";
		break;

	case 6:
		cout << "Субота";
		break;

	case 7:
		cout << "Воскресенье";
		break;

	default:
		cout << "Error!";
		break;
	}
	*/
}
