#include <iostream>
#include <cstdlib>

using namespace std;

template <class T> void show(T* m, int n) {
    for (int i = 0; i < n; i++) {
        cout << m[i] << " ";
    }

    cout << endl;
}

template <class X> void sort(X* m, int n) {
    show(m, n);

    X s;

    for (int i = 1; i <= n - i; i++) {
        for (int j = 0; j < n - i; j++) {
            if (m[j] > m[j + 1]) {
                s = m[j + 1] = m[j];
                m[j] = s;
            }
        }

        show(m, n);
    }
}

