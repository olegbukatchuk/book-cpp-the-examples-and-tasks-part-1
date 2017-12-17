#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num;

    int &ref = num;
    num = 100;

    cout << "num = " << num << endl;
    cout << "ref = " << ref << endl;

    ref = 200;

    cout << "num = " << num << endl;
    cout << "ref = " << ref << endl;

    return 0;
}