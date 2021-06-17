// Problem : I Hate 1111
// Link: https://codeforces.com/contest/1526/problem/B

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t=0;
    cin >> t;
    while(t>0){

        string s;

        cin >> s;

        int sum=0;
        for(int i=0; i<s.length(); ++i){
            sum += (int)(s[i]);
        }
        bool flag = false;
        for(int i=s.length(); i>0; --i){
            if(sum%i==0){
                flag=true;
            }
        }
        if(flag){
            cout << "YES"<<endl;
        }else{
            cout << "NO"<< endl;
        }

        t--;
    }


}