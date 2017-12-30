#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double f(double x, double y) {
    return x*x*exp(-x)-y;
}

double dsolve(double (*f)(double, double), double x0, double y0, double x) {
    int n=1000;

    double p1,p2,p3,p4;
    double h=(x-x0)/n;
    double y=y0;

    for (int k=0;k<n;k++) {
        p1=f(x0+k*h,y);
        p2=f(x0+k*h+h/2,y+h*p1/2);
        p3=f(x0+k*h+h/2,y+h*p2/2);
        p4=f(x0+k*h+h,y+h*p3);
        y=y+(h/6)*(p1+2*p2+2*p3+p4);
    }

    return y;
}

double Y(double x) {
    return (x*x*x/3+1)*exp(-x);
}

int main() {
    
}