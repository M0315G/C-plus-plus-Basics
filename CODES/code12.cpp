// Problem: Bad Squence
// Link: https://codeforces.com/contest/1214/problem/C


#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

    int n;
    cin >> n;
    string seq;
    cin >> seq;

    int count = 0;
    bool possible = true;
    for(int i=0; i<n; i++){

        if(seq[i]=='('){
            count++;
        }else if(seq[i]==')'){
            count--;
        }

        if(count<-1){
            possible = false;
        }
    }

    if(possible){
        if(count==0){
            cout << "YES" <<endl;
        }else{
            cout << "NO" << endl;
        }
    }else{
        cout << "NO" <<endl;
    }

    return 0;
}