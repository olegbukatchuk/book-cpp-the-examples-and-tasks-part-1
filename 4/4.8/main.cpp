#include <iostream>
#include <cstdlib>

using namespace std;

double mean(double* m, int n)
{
    double s = 0;

    for (int k = 0; k < n; k++) {
        s += m[k];
    }
}