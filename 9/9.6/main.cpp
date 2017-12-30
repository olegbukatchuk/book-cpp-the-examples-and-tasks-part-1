#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
double integrate(double (*f)(double), double a, double b, int m=1000) {
    double h=(b-a)/2/m;
    double s=0;

    for (int k=1;k<=m-1;k++) {
        
    }
}