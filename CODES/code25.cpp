// Problem :
// Link: https://codeforces.com/contest/1343/problem/A

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t>0){

        int n,x,k=2;
        cin >> n;
        while(true){
            if(n%((int)pow(2,k)-1)==0){
                x = n/(pow(2,k)-1);
                break;
            }else{
                ++k;
            }
        }
        cout << x <<endl;

        t--;
    }
    return 0;
}