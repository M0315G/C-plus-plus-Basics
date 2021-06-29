// Problem: Binary Period
// Link: https://codeforces.com/contest/1342/problem/B

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t>0){

        string seq;
        cin >> seq;
        set<int> nums;
        for(int i=0; i<seq.size(); ++i){
            if(seq[i] == '0'){
                nums.insert(0);
            }else{
                nums.insert(1);
            }
        }

        if(nums.size()==1){
            cout << seq << endl;
        }else{
            for(int i=0; i<seq.size(); ++i){
                cout << "01" << "";
            }
            cout << endl;
        }

        t--;
    }


    return 0;
}