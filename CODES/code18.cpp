// Problem: Construct the String
// Link: https://codeforces.com/contest/1335/problem/B

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t, a, b, n;
    int alphabet = 97;
    
    cin >> t;
    while(t>0){
        string ans;
        cin >> n >> a >> b;
        for(int i=0; i<n; i=i+b){
            for(int j=0; j<b ;j++){
                if(i+j<n){
                    ans = ans + char(alphabet+j);
                }else{
                    break;
                }
                
            }
        }

        cout << ans << endl;
        t--;
    }
    return 0;
}