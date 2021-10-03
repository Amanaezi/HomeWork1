#include <iostream>
using namespace std;

int main()
{
	double m, n, x;
	cin >> m >> n >> x;

	double res = ceil((m / x) * (n / x));
	cout << res;
}