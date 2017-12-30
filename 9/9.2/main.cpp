#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

double findRoot(double (*f)(double), double a, double b, double dx) {
    double x=(a+b)/2;

    while ((b-a)/2>dx) {
        if (f(a)==0) {
            return a;
        }

        if (f(b)==0) {
            return b;
        }

        if (f(x)==0) {
            return x;
        }

        if (f(a)*f(x)>0) {
            a=x;
        } else {
            b=x;
        }
        x=(a+b)/2;
    }
    return x;
}

double f(double x) {
    return exp(-x)-x;
}

double g(double x) {
    return exp(-x)-x;o
}

double h(double x) {
    return x*x-5*x+6;
}

void test(double (*f)(double), double a, double b, string eq) {
    try {
        if (f(a)*f(b)>0) {
            throw "Указан неверный диапазон!";
        }

        double dx=0.001;
        double z;

        cout<<"Решение уравнения "<<eq<<":\t";
        z=findRoot(f,a,b,dx);
        cout<<z<<endl;

        cout<<"Проверка найденного решения:\t";
        cout<<f(z)<<" = 0"<<endl;
    } catch (char* e) {
        cout<<e<<endl;
    }

    for (int k=1;k<=50;k++) {
        cout<<"-";
    }
    cout<<endl;
}

int main() {
    test(f,0,1,"0.5cos(x)-x=0");
    test(g,0,2,"exp(-x)-x");
    test(h,0,5,"x-5*x+6=0");
    test(h,0,2,"x*x-5*x+6=0");
    test(h,1,3,"x*x-5*x+6=0");
    test(h,2.5,4.5,"x*x-5*x+6=0");
    

    return 0;
}