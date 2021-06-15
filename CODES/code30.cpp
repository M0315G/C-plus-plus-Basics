// Problem : Mean Inequality
// Link: https://codeforces.com/contest/1526/problem/A

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t=0;
    cin >> t;
    while(t>0){

        int n;
        vector<int> integers;
        cin >> n;

        int a;
        for(int i=0; i<2*n; ++i){
            cin >> a;
            integers.push_back(a); 
        }

        sort(integers.begin(), integers.end());
        
        int ans[2*n] = {0};
        int index = 0;
        for(int i=0; i<n; ++i){
            ans[index] = integers[i];
            index += 2;
        }

        index = 1;
        for(int i=n; i<2*n; ++i){
            ans[index] = integers[i];
            index += 2;
        }

        for(int i=0; i<2*n; ++i){
            cout << ans[i] << " ";
        }

        t--;
    }


    return 0;
}