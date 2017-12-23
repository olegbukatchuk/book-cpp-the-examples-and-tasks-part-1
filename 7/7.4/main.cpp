#include <iostream>
#include <cstdlib>

using namespace std;

template <class X> void show(X x) {
    cout << "Функция с одним аргументом\n";
    cout << "Значение аргумента: " << x << endl;
}

template <class X, class Y> void show(X x, Y y) {
    cout << "Функция с двумя аргументами\n";
    cout << "Первый аргумент: " << x << endl;
    cout << "Второй аргумент: " << y << endl;
};