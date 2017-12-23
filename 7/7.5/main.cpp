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

template <> void show <int> (int arg) {
    cout << "Целочисленный аргумент: " << arg << endl;
}

template <> void show <MyClass> (MyClass obj) {
    obj.show();
}

int main() {
    MyClass obj(300);

    show('A');
    show(100.0);
    show(200);
    show(obj);

    return 0;
}