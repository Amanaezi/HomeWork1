#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int matchCount = 20;
	bool CurrentPlayer = true;

	while (matchCount > 0)
	{
		int move;

		for (int i = 0; i < matchCount; i++)
		{
			cout << '|';
		}
		cout << endl;

		cout << "Кол-во спичек = " << matchCount << endl;

		while (true)
		{
			cout << "Player, Make your move: " << endl;
			cin >> move;

			if (true)
			{
				if (move >= 1 && move <= 3 && move <= matchCount)
				{
					matchCount -= move;
					break;
				}

				cout << "Invalid move" << endl;
			}
		}

		for (int i = 0; i < matchCount; i++)
		{
			cout << '|';
		}
		cout << endl;

		cout << "Кол-во спичек = " << matchCount << endl;

		if (move == 3)
		{
			matchCount -= 3;
		}
		else if (matchCount == 2)
		{
			matchCount -= 1;
		}
		else if (matchCount == 3)
		{
			matchCount -= 2;
		}
		else if (matchCount == 4)
		{
			matchCount -= 3;
		}
		else
		{
			matchCount -= 3 - move;
		}


		if (matchCount > 2 && matchCount < 5 || matchCount == 1 || matchCount == 0)
		{
			CurrentPlayer = false;
			break;
		}
	}

	if (CurrentPlayer)
	{
		cout << "Player - won!" << endl;
	}
	else
	{
		cout << "Computer - won!" << endl;
	}
}



