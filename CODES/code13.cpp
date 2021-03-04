// Problem : Table Tennis
// Link: https://codeforces.com/contest/879/problem/B

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    long long k;
    cin >> n >> k;
    vector<int> power;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        power.push_back(a);
    }

    int ans;
    if (k >= n)
    {
        ans = *max_element(power.begin(), power.end());
        cout << ans << endl;
    }
    else
    {   
        int k1 = int(k);
        int wins = 0;
        ans = 0;
        int i = 1;
        while (wins != k1)
        {   
            if(ans!=i){
                if (power[ans] > power[i])
                {
                    wins++;
                }
                else
                {
                    wins = 1;
                    ans = i;
                }
            }
            i = (i+1)%n;
        }
        cout << power[ans] << endl;
    }

    return 0;
}