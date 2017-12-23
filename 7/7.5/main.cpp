#include <iostream>
#include <cstdlib>

using namespace std;

class MyClass {
public:
    int number;

    MyClass(int n) {
        number = n;
    }

    void show() {
        cout << "Объект класса MyClass: " << number << endl;
    }
};

template <class X> void show(X arg) {
    cout << "Значение аргумента функции: " << arg << endl;
}