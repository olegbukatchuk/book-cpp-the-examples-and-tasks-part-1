#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double integrate(double (*f)(double), double a, double b, double Fmax) {
    double x,y;

    int m=10000;

    double dx=(b-a)/m;
    double dy=Fmax/m;

    int count=0;

    for (int i=0;i<=m;i++) {
        for (int j=0;j<=m;j++) {
            x=a+i*dx;

            if (y<=f(x)) {
                count++;
            }
        }
    }

    double z=(double)count/(m+1)/(m+1);

    return Fmax*(b-a)*z;
}

double F1(double x) {
    return x*(1-x);
}

double F2(double x) {
    double pi=3.141592;

    return pi/2*tan(pi*x/4);
}

int main() {
    cout<<"Вычисление интегралов\n";
    cout<<integrate(F1,0,1,0.25)<<" vs. "<<(double)1/6<<endl;
    cout<<integrate(F2,0,1,1.6)<<" vs. "<<log(2)<<endl;

    return 0;
}