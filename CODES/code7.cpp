// Problem: Divisibility Problem
// Link: https://codeforces.com/contest/1328/problem/A

#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        int quotient = int(a / b);
        int rem = a % b;
        int ans = 0;
        if (rem != 0)
        {
            ans = b * (quotient + 1) - a;
        }

        cout << ans << endl;
    }

    return 0;
}