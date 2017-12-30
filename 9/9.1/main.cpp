#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

double findRoot(double (*f)(double), double x0, int n) {
    double x=x0;

    for (int k=1;k<=n;k++) {
        x=f(x);
    }

    return x;
}

double f(double x) {
    return 0.5*cos(x);
}

double g(double x) {
    return exp(-x);
}

double h(double x) {
    return (x*x+6)/5;
}

void test(double (*f)(double), double x0, string eg) {
    int n=100;

    double z;

    cout<<"Решение уравнения "<<eg<<":\t";

    z=findRoot(f,x0,n);

    cout<<z<<endl;
    cout<<"Проверка найденного решения:\t";

    cout<<z<<" = "<<f(z)<<endl;

    for (int k=1;k<=50;k++) {
        cout<<"-";
    }
    cout<<endl;
}

int main() {
    test(f,0,"x=0.5cos(x)");
    test(g,0,"x=exp(-x)");
    test(h,1,"x=(x*x+6)/5");

    return 0;
}