// Problem: Little Artemis
// Link: https://codeforces.com/contest/1333/problem/A

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t, n, m;
    cin >> t;
    for(int i=0; i<t;i++){
        cin >> n >> m;
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                if(j==0 && k==0){
                    cout << "W" ;
                }else{
                    cout << "B";
                }
            }
            cout << endl;
        }
    }
    return 0;
}