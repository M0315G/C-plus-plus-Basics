// Problem: Anti-Sudoku
// Link:https://codeforces.com/contest/1335/problem/D

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t > 0)
    {
        char sudoku[9][9];
        string num;
        for (int i = 0; i < 9; i++)
        {   num="";
            cin >> num;
            for (int j = 0; j < 9; j++)
            {
                sudoku[i][j] = num[j];
            }
        }

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (sudoku[i][j] == '1')
                {
                    sudoku[i][j] = '2';
                }
            }
        }

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cout << sudoku[i][j];
            }
            cout << endl;
        }

        t--;
    }

    return 0;
}