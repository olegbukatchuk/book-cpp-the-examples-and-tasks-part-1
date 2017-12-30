#include <iostream>
#include <cstdlib>

using namespace std;

void findA(double* a, double* x, double* y, int n) {
    double q;
    a[0]=y[0];

    for (int k=1;k<n;k++) {
        a[k]=y[k];
        q=1;

        for (int m=0;m<k;m++) {
            a[k]-=a[m]*q;
            q*=(x[k]-x[m]);
        }

        a[k]/=q;
    }
}

double P(double* a, double z, double* x, int n) {
    double s=0;
    double q;

    for (int k=0;k<n;k++) {
        q=1;

        for (int m=0;m<k;m++) {
            q*=(z-x[m]);
        }
        s+=a[k]*q;
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

    double x[n]={1,3,5,7,9};
    double y[n]={0,2,-1,1,3};

    double a[n];

    findA(a,x,y,n);
    line(m);
    cout<<"x\t| P(x)\n";
    line(m);

    for (k=0;k<n;k++) {
        cout<<x[k]<<"\t| "<<P(a,x[k],x,n)<<endl;
    }

    double dx=1;
    line(m);
    cout<<"x\t| P(x)\n";
    line(m);

    for (k=0;k<n;)

    return 0;
}