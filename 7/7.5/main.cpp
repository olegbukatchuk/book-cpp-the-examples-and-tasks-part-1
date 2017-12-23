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