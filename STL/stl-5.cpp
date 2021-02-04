// Topic: std::set<T>

// Syntax: std::set<T> objName;

// Notes:
// 1. std::set is an Associative Container that contains a sorted set of unique objects of type key.
// 2. Insertion, Removal, Search have logirathmic complexity.
// 3. It is implmented using Red-Black Tree.
// 4. If we want to store user defined data type in set then we will have to provide
//    compare function so that set can store them in sorted order.
// 5. We can pass the order of sorting while constructing set objects.

// Bottom line:
// It stores unique elemnts and they are sorted in sorted order (A/D)
// By default it is in Ascending Order.

#include<iostream>
#include<set>
#include<string>
#include<functional>
using namespace std;


class Person{
    public:
    float age;
    string name;

    bool operator < (const Person& rhs) const {return age<rhs.age;}
}


int main(){
    // set<int> one_Set = {1, 2, 4, 3, 5, 1, 2, 3, 4, 5};
    // for(const auto& e: one_Set){
    //     cout << e << endl;
    // }

    set<Person> Set = {{30, "Rupesh"}, {25, "Hitesh"}, {22, "Jhon"}};
    for(const auto& e:Set){
        cout << e.age << " " << e.name << endl;
    }

    return 0;
}