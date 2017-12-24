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

template <int m, int n> Polynom <(m > n ? m : n)> operator-(Polynom <m> x, Polynom <n> y) {
    return x + (-1) * y;
};

template <int power> Polynom <power - 1> Diff(Polynom <power> pol) {
    Polynom <power - 1> tmp;

    for (int k = 0; k <= power - 1; k++) {
        tmp[k] = pol[k + 1] * (k + 1);
    }

    return tmp;
}

int main() {
    double A[] = {1, 2. -1, 1};
    double B[] = {-1, 3, 0, 2, -1, 1};
    double x = 2;

    Polynom <3> P(A);

    cout << "Полином P:\t";
    P.getAll();

    cout << "Значение P("<< x <<") = ";
    cout << P(x) << endl;
    cout << "Полином P:\t";

    Diff(P).getAll();
    cout << "Значение P'("<< x <<") = ";
    cout << Diff(P) (x) << endl;

    Polynom <5> Q(B);

    cout << "Полином Q:\t";
    Q.getAll();

    cout << "Значение Q("<< x <<") = ";
    cout << Q(x) << endl;
    cout << "Полином P * Q:\t";

    (P * Q).getAll();
    cout << "Значение (P * Q) ("<< x <<") = ";

    cout << (P * Q) (x) << endl;
    cout << "Полином P + Q:\t";

    (P + Q).getAll();
    cout << "Значение (P + Q) ("<< x <<") = ";

    cout << (P + Q) (x) << endl;
    cout << "Полином Q - P:\t";

    (Q - P).getAll();
    cout << "Значение (Q - P) ("<< x <<") = ";

    cout << (Q - P) (x) << endl;

    return 0;
}

