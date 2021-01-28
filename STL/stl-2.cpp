// Topic: std::array

// Syntax: std::array<T, N> array;
//          T: type
//          N: size

// Notice:
// 1. std::array is a container that encaptulates fixed size arrays.
// 2. arraysize is needed at compile time.
// 3. Assign by value is actually by value.
// 4. Access Elements:
//      a. at()
//      b. []
//      c. front()
//      d. back()
//      e. data() : It gives the access to the underlying array

#include <iostream>
#include <array>
using namespace std;

int main()
{

    // Declare
    std::array<int, 5> myarray;

    // Initialization
    std::array<int, 5> myarray = {1, 2, 3, 4, 5};
    std::array<int, 5> myarray2 = {1, 2, 3, 4, 5};

    // Assign using initializer list
    std::array<int, 5> myarray;
    myarray = {1, 2, 3, 4, 5};

    return 0;
}