// Topic: std::vector

// Notes:
// 1. std::vector is a sequence container and also known as Dynamic Array or Array Lisy.
// 2. Its size can grow and shrink dynamically, and no need to provide size at compile time.

// Element access
// at(), [], front(), back(), data()

// Modifiers
// insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear()

#include <iostream>
#include<vector>
using namespace std;

int main(){

    // Declarations
    std::vector<int> arr1;
    std::vector<int> arr2 (5, 20);
    std::vector<int> arr3 = {1, 2, 3, 4, 5};
}