#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

template <class A, class B> class MyClass {
public:
    A first;
    B second;

    MyClass(A f, B s) {
        first = f;
        
    }
};