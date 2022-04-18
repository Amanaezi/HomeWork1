#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int t = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a')
        {
            t++;
        }
    }

    if (t > s.length() / 2)
    {
        cout << s.length();
    }
    else
    {
        cout << 2 * t - 1;
    }
}