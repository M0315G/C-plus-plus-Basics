// Problem: 
// Link: https://codeforces.com/contest/1480/problem/A

#include<iostream>
#include<string>
using namespace std;

int main(){

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s, s2;
        cin >> s;
        for(int j=0; j<s.length(); j++){
            if((j+1)%2==0){
                if(s[j]=='z'){
                    s2 = s2 + "y";
                }else{
                    s2 = s2 + "z";
                }
            }else{
                if(s[j]=='a'){
                    s2 = s2 + "b";
                }else{
                    s2 = s2 + "a";
                }
            }
        }

        cout << s2 << endl;
    }
    return 0;
}