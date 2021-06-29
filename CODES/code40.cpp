// Problem: Sorted Adjacent Difference
// Link: https://codeforces.com/contest/1339/problem/B

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t>0){

        int n;
        cin >> n;
        vector<int> nums;
        int a;
        for(int i=0; i<n; ++i){
            cin >> a;
            nums.push_back(a);
        }

        sort(nums.begin(), nums.end());
        int p, q;
        vector <int> ans;

        if(n%2==0){
            p = n/2 - 1;
            q = n/2;
        }else{
            ans.push_back(nums[(n+1)/2 - 1]);
            p = (n+1)/2 - 2;
            q = (n+1)/2;
        }

        while(p>=0 && q<n){
            ans.push_back(nums[q]);
            ans.push_back(nums[p]);
            p--;
            q++;
        }

        for(int i=0; i<n; ++i){
            cout << ans[i] << " ";
        }

        cout << end;

        t--;
    }

    return 0;
}