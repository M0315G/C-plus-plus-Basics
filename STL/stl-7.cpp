// Topic: std::multiset<T>

// Syantax: std::multiset<T> objectName;

// Notes:
// 1. std::multiset is a Associative COnatiner that conatins a sorted of duplicate objects of type key.
// 2. It is usually implmented using Red-Black Tree.
// 3. Insertion, Removal, Search have logarithmic complexity.
// 4. If we want to store user defined data type in multiset then we will have to provide
//    compare function so that multiset can store them in sorted order.
// 5. We can pass the order of sorting while constructing multiset object.

// Bottom line:
// multiset is similar to set except it can have multiple elements with same value.

#include <iostream>
#include <set>
#include <string>
#include <functional>
using namespace std;

// int main(){
//     std::multiset<int, std::less<int> > multi_set = {5, 2,4,5,1,7,4,3};
//     for(const auto& e:multi_set){
//         cout << e <<endl;
//     }
// }

// Example: User Defined

class Person
{
public:
    float age;
    string name;
    bool operator<(const Person &rhs) const { return age < rhs.age; }
    bool operator>(const Person &rhs) const { return age > rhs.age; }
};

int main(){

    std::multiset<Person, std::greater<> > multiSet = {{25, "Rupesh"}, {20, "Hitesh"}};

    for (const auto &e : multiSet)
    {
        cout << e.age << " " << e.name << endl;
    }

    return 0;
}
