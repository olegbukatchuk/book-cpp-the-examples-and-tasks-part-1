#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
double integrate(double (*f)(double), double a, double b, int m=1000) {
    double h=(b-a)/2/m;
    double s=0;

    for (int k=1;k<=m-1;k++) {
        s+=4*f(a+(2*k-1)*h)+2*f(a+2*k*h);
    }
    s+=f(a)+f(b)+4*f(a+(2*m-1)*h);
    s*=h/3;

    return s;
}

double F1(double x) {
    return x*(1-x);
}

double F2(double x) {
    double pi=3.141592;
    return pi/2*tan(pi*x/4);
}

double F3(double x) {
    return exp(-x)*cos(x);
}

int main() {
    cout<<"Вычисления интегралов\n";
    
}