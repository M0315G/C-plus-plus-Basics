// Problem : Candies and Two Sisters
// Link: https://codeforces.com/contest/1335/problem/A

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t>0){

        long n, ans;
        cin >> n;
        if(n%2==0){
            ans = n/2 -1;
        }else{
            ans = int(n/2);
        }
        cout << ans <<endl;
        t--;
    }

    return 0;
}