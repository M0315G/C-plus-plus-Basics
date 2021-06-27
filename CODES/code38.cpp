// Problem: Social Network
// Link: https://codeforces.com/contest/1234/problem/B1 && https://codeforces.com/contest/1234/problem/B2

#include<bits/stdc++.h>

using namespace std;

int main(){


    int n, k;
    cin >> n >> k;

    int id;
    queue<long long> chat; 
    for(int i=0; i<n; ++i){
        cin >> id;

        queue<long long> g = chat;
        bool flag = false;
        while (!g.empty()) {
            if(g.front()==id){
                flag = true;
                break;
            }
            g.pop();
        }

        if(!flag){
            if(chat.size()<k){
                chat.push(id);
            }else{
                chat.pop();
                chat.push(id);
            }
        }
    }

    queue<long long> g = chat;
    cout << g.size() << endl;
    int lst[chat.size()-1];
    int i=0;
    while (!g.empty()) {
        lst[i] = g.front();
        g.pop();
        i++;
    }

    for(int i=chat.size()-1; i>=0;--i){
        cout << lst[i]<<" ";
    }
    cout << endl;



}