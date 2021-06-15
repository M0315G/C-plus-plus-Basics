// Problem: Balanced Array
// Link: https://codeforces.com/contest/1343/problem/B

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t>0){
        int n;
        cin >> n;

        if(((n/2)%2!=0)){
            cout << "NO" <<endl;
        }else{
            int sum=0;
            vector<int> arr;
            int ct=1;
            for(int i=0; i<n/2; ++i, ++ct){
                arr.push_back(2*ct);
                sum += arr[i];
            }

            ct = 1;
            int sum2 = 0;
            for(int i=n/2; i<n-1; ++i){
                arr.push_back(ct);
                ct +=2;
                sum2 +=arr[i];
            }
            arr.push_back(sum - sum2);

            cout << "YES" <<endl;
            for(int i=0; i<n; ++i){
                cout << arr[i] <<" ";
            }
        }

        t--;
    }

    return 0;
}