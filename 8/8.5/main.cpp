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
};