// Problem: Sum of Odd Integers
// Link: https://codeforces.com/contest/1327/problem/A

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t>0){

        unsigned long long n, k;

        cin >> n  >> k;

        if( k*k <=n && (n+k)%2==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

        t--;
    }

    return 0;
}