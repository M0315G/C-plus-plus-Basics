// Problem : Kana and Dragon Quest game
// Link: https://codeforces.com/contest/1337/problem/B

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t>0){
        int x,n,m;
        cin >> x >> n >> m;

        if(x>=20){
            for(int i=0; i<n; ++i){
                x = floor(x/2)+10;
            }

            if(x-10*m <=0){
                cout << "YES" <<endl;
            }else{
                cout << "NO" <<endl;
            }
        }else{

            x = x - 10*(m-1);
            // for(int i=0; i<n; ++i){
            //     x = floor(x/2)+10;
            // }
            x = x -10;

            if(x<=0){
                cout << "YES" <<endl;
            }else{
                cout << "NO" <<endl;
            }
        }

        t--;
    }

    return 0;
}