// Problem : T-primes
// Link: https://codeforces.com/contest/230/problem/B

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<bool> primes;
    vector<long> t_primes;
    long max_cap = 1000000;

    for (int i = 0; i <= max_cap * max_cap; i++)
    {
        primes.push_back(1);
    }

    primes[0] = 0;
    primes[1] = 0;

    for (int i = 2; i < max_cap; i++)
    {
        if (primes[i] == 1)
        {
            for (int j = 2; i * j <= max_cap * max_cap; j++)
            {
                primes[i * j] = 0;
            }
        }
    }

    for (int i = 0; i <= max_cap * max_cap; i++)
    {
        if (primes[i] == 1)
        {
            t_primes.push_back(i * i);
        }
    }

    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (*find(t_primes.begin(), t_primes.end(), num) == num)
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