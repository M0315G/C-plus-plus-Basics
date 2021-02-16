// Problem: New Year's Number
// Link: https://codeforces.com/contest/1475/problem/B

#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num, x, y;
        cin >> num;
        x = int(num / 2020);
        y = num % 2020;
        if (x >= y)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}