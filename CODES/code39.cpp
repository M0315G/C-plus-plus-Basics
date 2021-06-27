// Problem: K-th beautiful String
// Link: https://codeforces.com/contest/1328/problem/B

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t>0){

        unsigned long long n, k, num;
        cin >> n >> k;
        
        unsigned long long pos1, pos2;
        
        if(k==1){
            pos1 = n-1;
            pos2 = n-2;
        }else{
            unsigned long long ct=2;
            bool flag = false;
            while(ct<=n){
                num = (ct*(ct-1))/2 ;
                if( num >= k ){
                    flag = true;
                    break;
                }
                ct++;
            }
            
            if(!flag){
                pos1 = 0;
                pos2 = 1;
            }else{
                unsigned long long requiredNum = ct - 1;
                //cout << requiredNum << endl;
                unsigned long long diff = k - ((requiredNum*(requiredNum - 1))/2);
                pos1 = n - (requiredNum+1);
                pos2 = n - (diff); 
            }
    
            
        }
         
        //cout << pos1 << pos2 << endl;

        string ans;
        for(long i=0; i<n; i++){
            if(i==pos1 || i==pos2){
                ans.append("b");
            }else{
                ans.append("a");
            }
        }

        cout << ans << endl;
        // baaba


        t--;
    }

    return 0;
}