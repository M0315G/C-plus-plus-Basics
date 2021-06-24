// Problem: T-primes
// Link: https://codeforces.com/contest/230/problem/B


#include <bits/stdc++.h>
using namespace std;


int main()
{   
    int n;
    cin  >> n;
    while(n>0){

        int a;
        cin >> a;

        int sqr = sqrt(a);
        bool flag=false;
        for(int i=2; i<a/2; ++i){
            if(sqr%2==0){
                flag=true;
                break;
            }
        }


        if(!flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        n--;
    }
	
	return 0;
}
