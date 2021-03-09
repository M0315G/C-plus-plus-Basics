// Problem: Kind Anton
// Link: https://codeforces.com/contest/1333/problem/B

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    

    
    cin >> t;
    for (int i = 0; i < t; i++)
    {   
        int n, num;
        cin >> n;
        vector<bool> present(3, false);
        vector<int> a, b;
        bool ans = true;
        //cout << present[0] << present[1] << present[2] << endl;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            a.push_back(num);
        }
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            b.push_back(num);
        }

        for (int j = 0; j < n; j++)
        {   
            //cout << present[0] << present[1] << present[2] << endl;
            if (a[j] == b[j])
            {
                if (a[j] == -1)
                {
                    present[0] = true;
                }
                else if (a[j] == 0)
                {
                    present[1] = true;
                }
                else
                {
                    present[2] = true;
                }
            }
            else if (a[j] > b[j])
            {
                if (present[0]==false)
                {
                    ans = false;
                    //cout << "Break" <<endl;
                    break;
                }
                else if (a[j] == -1)
                {
                    present[0] = true;
                }
                else if (a[j] == 0)
                {
                    present[1] = true;
                }
                else
                {
                    present[2] = true;
                }
            }
            else
            {   

                if (present[2]==false)
                {
                    ans = false;
                    //cout << "Break" <<endl;
                    break;
                }
                else if (a[j] == -1)
                {
                    present[0] = true;
                }
                else if (a[j] == 0)
                {
                    present[1] = true;
                }
                else
                {
                    present[2] = true;
                }
            }
        }

        if (ans)
        {
            cout << "YES" << endl;
            //cout << present[0] << present[1] << present[2] << endl;
        }
        else
        {
            cout << "NO" << endl;
            //cout << present[0] << present[1] << present[2] << endl;
        }
    }
    return 0;
}