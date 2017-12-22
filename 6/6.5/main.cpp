#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

const int n = 10;

class Taylor {
private:
    double a[n];

public:
    double &operator[](int k) {
        return a[k];
    }

    Taylor (double p = 0) {
        for (int k = 0; k < n; k++) {
            (*this)[k] = p;
        }
    }

    Taylor (double* b) {
        for (int k = 0; k < n; k++) {
            (*this)[k] = b[k];
        }
    }

    double operator() (double x) {
        double s = 0, q = 1;

        for (int k = 0; k < n; k++) {
            s += (*this)[k] * q;
            q *= x;
        }

        return s;
    }
};

int main() {
    double b[n] = {0, 1, 0, 1./3, 0, 2./15, 0, 17./315, 0, 62./2835};

    Taylor myexp, f(1), mytan(b);

    myexp[0] = 1;

    for (int k = 1; k < n; k++) {
        myexp[k] = myexp[k - 1] / k;
    }

    double x = 1.0;

    cout << myexp(x) << " vs. " << exp(x) << endl;
    cout << mytan(x) << " vs. " << tan(x) << endl;
    cout << f(x / 2) << " vs. " << 1 / (1 - x / 2) << endl;

    return 0;
}