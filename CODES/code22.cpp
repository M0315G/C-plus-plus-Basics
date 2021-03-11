// Problem :
// Link: https://codeforces.com/contest/1337/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t > 0)
    {

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int ans[3];
        ans[0] = b;
        ans[1] = c;
        ans[2] = c;

        cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;

        t--;
    }

    return 0;
}