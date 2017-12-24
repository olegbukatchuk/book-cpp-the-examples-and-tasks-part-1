#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

template <class A = int, class B = char> class MyClass {
public:
    A first;
    B second;

    MyClass(A f, B s) {
        first = f;
        second = s;
    }

    void show() {
        cout << "Значения " << first << " и " << second << endl;
    }
};

int main() {
    MyClass <double, int> objA(3.5, 100);
    MyClass <string> objB("текст", 'A');
    MyClass <> objC(200, 'B');

    objA.show();
    objB.show();
    objC.show();

    return 0;
}