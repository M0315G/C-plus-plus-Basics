// Problem: Nastya and Rice
// Link: https://codeforces.com/contest/1341/problem/A  

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t>0){
        int n,a,b,c,d;
        bool flag=false;
        cin >> n >> a >> b >> c >> d;
        if((a-b)*n<=c+d){
            for(int i=n*(a-b); i<=n*(a+b); ++i){
                if(i>=(c-d) && i<=(c+d)){
                    flag = true;
                    break;
                }
            }
        }
        

        if(flag){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }

        t--;
    }

    return 0;
}