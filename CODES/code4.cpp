// Problem: 
// Link: https://codeforces.com/contest/1285/problem/A

#include <iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){

    int commands;
    cin >> commands;

    int L,R;
    L=R=0;
    string cmd;
    cin  >> cmd;
    for(int i=0; i<commands;i++){
        if(cmd[i] == 'L'){
            L--;
        }else{
            R++;
        }
    }
    int ans = abs(L-R) + 1;
    cout << ans;

    return 0;

}