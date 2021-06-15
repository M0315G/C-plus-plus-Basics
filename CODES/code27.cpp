// Problem : Alternating subsequence
// Link: https://codeforces.com/contest/1343/problem/C

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t>0){

        int n, a;
        cin >> n;

        vector <int> seq;
        for(int i=0; i<n; ++i){
            cin >> a;
            seq.push_back(a);
        }
        bool flag = true;
        long long sums;

        sums=0;
        int chck = 1;
        int neg, pos;
        for(int i=0; i<seq.size(); ++i){
            if(i==0){
                if(seq[i]<0){
                    chck = 0;
                    neg = seq[i];
                    pos = 0;
                }else{
                    chck = 1;
                    pos = seq[i];
                    neg = 0;
                }
                sums += seq[i];
                continue;
            }

            if( seq[i]<0 && chck ==1 ){
                chck = 0;
                neg = seq[i];
                sums += neg;

            }else if( seq[i]<0 && chck ==0 ){
                sums -= neg;
                neg = max(neg, seq[i]);
                sums += neg;

            }else if( seq[i]>0 && chck ==1 ){
                sums -= pos;
                pos = max(pos, seq[i]);
                sums += pos;

            }else{
                chck = 1;
                pos = seq[i];
                sums += pos;
            }

        }
        
        cout << sums << endl;
        t--;
    }

    return 0;
}