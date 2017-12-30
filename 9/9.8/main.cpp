#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double f(double x, double y) {
    return x*x*exp(-x)-y;
}

double dsolve(double (*f)(double, double), double x0, double y0, double x) {
    int n=1000;

    double h=(x-x0)/n;
    double y=y0;

    for (int k=0;k<n;k++) {
        y=y+h*f(x0+k*h,y);
    }
    return y;
}

