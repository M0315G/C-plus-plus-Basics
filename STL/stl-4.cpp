// Topic: vector in C++

#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> Vec;
    for(int i=0; i<32; i++){
        Vec.push_back(i);
        cout << "Size: " << Vec.size() << "  Capacity: " <<Vec.capacity()<< endl;
    }
}