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

    double &operator[] (int k) {
        return a[k];
    }

    template <int n> Polynom <power + n> operator*(Polynom <n> pol) {
        Polynom <power + n> tmp;

        for (int i = 0; i <= power; i++) {
            for (int j = 0; j <= n; j++) {
                tmp[i + j] += a[i] * pol[j];
            }
        }

        return tmp;
    }

    template <int n> Polynom <(n > power ? n : power)> operator+(Polynom <n> pol) {
        int i;

        Polynom <(n > power ? n : power)> tmp;

        for (i = 0; i <= power; i++) {
            tmp[i] += a[i];
        }

        for (i = 0; i <= n; i++) {
            tmp[i] += pol[i];
        }

        return tmp;
    }
};

template <int power> Polynom <power> operator*(double r, Polynom <power> pol) {
    return pol * r;
}



