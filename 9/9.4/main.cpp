#include <iostream>
#include <cstdlib>

using namespace std;

double phi(int k, double z, double* x, int n) {
    int i;

    double res=1;

    for (i=0;i<k;i++) {
        res*=(z-x[i])/(x[k]-x[i]);
    }

    for (i=k+1;i<n;i++) {
        res*=(z-x[i])/(x[k]-x[i]);
    }

    return res;
}

double L(double z, double* x, double* y, int n) {
    double s=0;

    for (int k=0;k<n;k++) {
        s+=y[k]*phi(k,z,x,n);
    }

    return s;
}

void line(int m) {
    for (int k=1;k<=m;k++) {
        cout<<"-";
    }
    cout<<endl;
}

int main() {
    int k,m=20;

    const int n=5;

    
}