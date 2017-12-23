#include <iostream>
#include <cstdlib>

using namespace std;

template <class T> void show(T* m, int n) {
    for (int i = 0; i < n; i++) {
        cout << m[i] << " ";
    }

    cout << endl;
}

