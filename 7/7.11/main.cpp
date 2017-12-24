#include <iostream>
#include <cstdlib>

using namespace std;

template <int power> class Polynom {
private:
    double a[power + 1];

public:
    Polynom() {
        for (int k = 0; k <= power; k++) {
            a[k] = 0;
        }
    }

    Polynom(double* nums) {
        for (int k = 0; k <= power; k++) {
            a[k] = nums[k];
        }
    }

    void getAll() {
        cout << "| ";

        for (int k = 0; k <= power; k++) {
            cout << a[k] << " | ";
        }

        cout << endl;
    }

    double operator() (double x) {
        double s = 0, q = 1;

        for (int k = 0; k <= power; k++) {
            s += a[k] * q;
            q *= x;
        }

        return s;
    }

    o
};