// Problem: Balanced Tunnel
// Link: https://codeforces.com/contest/1237/problem/B

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> input_seq, output_seq;
    vector<bool> visited;
    int num;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        input_seq.push_back(num);
        visited.push_back(false);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        output_seq.push_back(num);
    }

    int skips = 0;
    int k = 0, l = 0;
    while (k < n)
    {
        if (visited[input_seq[k] - 1] == false)
        {   

            if (input_seq[k] != output_seq[l])
            {
                skips++;
                
            }
            else
            {
                k++;
                
            }
            visited[output_seq[l] - 1] = true;
            l++;
        }
        else
        {
            k++;
            
        }

    }

    //cout << "Here3" <<endl;
    cout << skips << endl;

    return 0;
}