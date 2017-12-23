#include <iostream>
#include <cstdlib>

using namespace std;

template <class X> void show(X x) {
    cout << "Функция с одним аргументом\n";
    cout << "Значение аргумента: " << x << endl;
}