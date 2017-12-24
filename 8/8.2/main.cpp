#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

template <class A, class B> struct MyStruct {
    A first;
    B second;
};

template  <class A, class B> void show(MyStruct <A, B> str) {
    cout << "Первое поле: " << str.first << endl;
    cout << "Второе поле: " << str.second << endl;
};

int 