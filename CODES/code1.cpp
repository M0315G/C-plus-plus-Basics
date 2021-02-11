// Problem : Odd Divisor
// Link: https://codeforces.com/contest/1475/problem/A


#include<iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        long long number;
        bool flag=false;
        cin >> number;
        for(long long j=number; j>1; j=j/2){
            if(j%2!=0){
                flag=true;
                break;
            }
        }

        if(flag){
            cout << "YES"<<endl;
        }else{
            cout << "NO" <<endl;
        }
    }
    return 0;
}