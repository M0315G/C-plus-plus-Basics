// Problem: Sum of odd Integers
// Link: https://codeforces.com/contest/1327/problem/A

#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long n, k;
        cin >> n >> k;
        if ((k % 2 == n % 2) && (k * k <= n))
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