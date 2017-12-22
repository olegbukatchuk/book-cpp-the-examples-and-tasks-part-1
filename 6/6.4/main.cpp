#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

const int n = 10;

class Taylor {
public:
    double a[n];

    Taylor(double p = 0) {
        for (int k = 0; k < n; k++) {
            a[k] = p;
        }
    }

    Taylor(double* b) {
        for (int k = 0; k < n; k++) {
            a[k] = b[k];
        }
    }

    double value(double x) {
        double s = 0, q = 1;

        for (int k = 0; k < n; k++) {
            s += a[k] * q;
            q *= x;
        }

        return s;
    }
};

int main() {
    double b[n] = {0, 1, 0, 1./3, 0, 2./15, 0, 17./315, 0, 62./2835};

    Taylor myexp, f(1), mytan(b);

    myexp.a[0] = 1;

    for (int k = 1; k < n; k++) {
        myexp.a[k] = myexp.a[k - 1] / k;
    }

    double x = 1.0;

    cout << myexp.value(x) << " vs. " << exp(x) << endl;
    cout << mytan.value(x) << " vs. " << tan(x) << endl;
    cout << f.value(x / 2) << " vs. " << 1 / (1 - x / 2) << endl;

    return 0;
}

