#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

template <class T> class MyClass {
private:
    T value;

    MyClass(T v) {
        value = v;
    }

    void show() {
        cout << "Значение поля: " << value << endl;
    }
};

