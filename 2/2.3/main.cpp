#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n, s = 0, k = 1;

    cout << "Введите верхнюю границу для суммы: ";
    cin >> n;

    for (; k <= n;) {
        s += k * k;
        k++;
    }

    cout << "Сумма квадратов от 1 до " << n << ": " << s << endl;

    return 0;
}