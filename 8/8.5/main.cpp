#include <iostream>
#include <cstdlib>
#include <valarray>

using namespace std;

class Polynom {
private:
    valarray <double> a;

public:
    Polynom(int n = 0) {
        a.resize(n + 1, 0);
    }

    Polynom(double* nums, int n) {
        valarray <double> b(nums, n + 1);
        a = b;
    }

    int power() {
        return a.size() - 1;
    }

    void getAll() {
        cout << "| ";

        for (int k = 0; k <= power(); k++) {
            cout << a[k] << " | ";
        }

        cout << endl;
    }

    double operator() (double x) {
        valarray <double> b(a);
        double q = 1;

        for (int k = 0; k < b.size(); k++) {
            b[k] *= q;
            q *= x;
        }

        return b.sum();
    }

    double &operator[] (int x) {
        valarray <double> b(a);
        double q = 1;

        for (int k = 0; k < b.size(); k++) {
            b[k] *= q;
            q *= x;
        }

        return b.sum();
    }

    double &operator[] (int k) {
        return a[k];
    }

    Polynom operator*(Polynom pol) {
        Polynom tmp(pol.power() + power());

        for (int i = 0; i <= power(); i++) {
            for (int j = 0; j <= pol.power(); j++) {
                tmp[i + j] += a[i] * pol[j];
            }
        }

        return tmp;
    }

    Polynom operator+(Polynom pol) {
        int i;
        int length = pol.power() > power() ? pol.power() : power();

        Polynom tmp(length);

        for (i = 0; i <= power(); i++) {
            tmp[i] += a[i];
        }

        for (i = 0; i <= pol.power(); i++) {
            tmp[i] += pol[i];
        }

        return tmp;
    }
};

Polynom operator*(Polynom pol, double r) {
    Polynom tmp(pol.power());

    for (int k = 0; k <= pol.power(); k++) {
        
    }
}