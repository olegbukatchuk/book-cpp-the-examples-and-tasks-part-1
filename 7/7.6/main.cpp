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
        second = s;
    }

    void show() {
        cout << "Первое поле: " << first << endl;
        cout << "Второе поле: " << second << endl;
    }
};

int main() {
    MyClass <int, char> objA(100, 'A');
    MyClass <string, double> objB("текст", 10.5);
    MyClass <char*, string> objC("первый", "второй");
    MyClass <int, int> objD(1, 2);

    
}