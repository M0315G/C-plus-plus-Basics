// Problem: Ternary XOR
// Link: https://codeforces.com/contest/1328/problem/C

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        string x;
        cin >> n >> x;

        string a(n, '0'), b(n, '0');

        for (int j = 0; j < n; ++j)
        {
            if (x[j] == '1')
            {
                a[j] = '1';
                b[j] = '0';

                for (int k = j + 1; k < n; ++k)
                {
                    b[k] = x[k];
                }

                break;
            }
            else
            {
                if (x[j] == '2')
                {
                    a[j] = b[j] = '1';
                }
                else
                {
                    a[j] = b[j] = '0';
                }
            }
        }

        cout << a << endl
             << b << endl;
    }
    return 0;
}