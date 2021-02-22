// Problem: Two regular Polygons
// Link:

#include <iostream>

using namespace std;

int main()
{

    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int m, n;
        cin >> n >> m;
        if (n % m == 0)
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