#include <iostream>
#include <cstdlib>

using namespace std;

template <class X> void show(X arg) {
    cout << arg << endl;
}

int main() {
    show('A');
    show(123);
    show("Текст");

    return 0;
}