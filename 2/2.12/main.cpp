#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n = 10, s = 0, k = 1;

    start:
    s += k * k;

    if (k < n) {
        k++;
        goto start;
    }

    cout << "Сумма квадратных чисел от 1 до " << n << ": " << s << endl;

    return 0;
}