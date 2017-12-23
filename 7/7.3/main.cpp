#include <iostream>
#include <cstdlib>

using namespace std;

template <class X, class R> R apply(R (*fun) (X), X arg) {
    return fun(arg);
};

double f(double x) {
    return x * (1 - x);
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

char symb(int n) {
    return 'A' + n;
}

int main() {
    cout << apply(f, 0.5) << endl;
    cout << apply(factorial, 5) << endl;
    cout << apply(symb, 3) << endl;

    return 0;
}