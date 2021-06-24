// Problem: Winner
// Link: https://codeforces.com/contest/2/problem/A

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t>0){
        
        int n;
        cin >> n;
        int num[n];
        vector<int> s;
        int x,distinct=0;
        int maxx=-1;
        for(int i=0; i<n; ++i){
          
            cin >> x;
                if(x==maxx){
                    distinct++;
                    maxx=x+1;
                }else if(x==maxx-1){
                    continue;
                } 
                else{
                distinct++;
                maxx=x;
            }
            // cout<<"max is "<<maxx<<endl;
        }
        cout<<distinct<<endl;
        distinct=0;
        // for (int i: num) {
        //     s.insert(i);
        // }
        
        // int distinct = 0;
        // int previous = num[0];
        // for(int i=0; i<n; ++i){
        //     if(find(s.begin(), s.end(), num[i])!=s.end()){
                
        //         s.insert(++num[i]);
        //     }else{
        //         s.insert(num[i]);
        //     }
        //     // previous = num[i];
        // }
        
        // for (int i: s) {
        //     cout << i << "  ";
        // }
      t--;  
    }

    return 0;
}