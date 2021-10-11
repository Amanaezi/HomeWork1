#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Введите коефициенты a, b, c:" << endl;

	int a, b, c;
	cin >> a >> b >> c;

	int d = (b*b) - (4 * a*c);
	int x1 = (-b + sqrt(d)) / (2 * a);
	int x2 = (-b - sqrt(d)) / (2 * a);

	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
}