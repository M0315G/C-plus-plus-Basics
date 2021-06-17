// Problem: Yet another Tetris problem
// Link: https://codeforces.com/contest/1324/problem/A

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t>0){

        int n;
        cin >> n;        
        int field[n];

        for(int i=0; i<n; ++i){
            cin >> field[i];
        }

        bool flag=false;
        for(int i=1; i<n; ++i){
            if(abs(field[i]-field[i-1])%2==0){
                flag=true;
                break;
            }
        }

        if(flag){
            cout << "YES" <<endl;
        }else{
            cout << "NO" << endl;
        }
        

        t--;
    }


    return 0;
}