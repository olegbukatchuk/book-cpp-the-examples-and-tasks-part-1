#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n, s = 0, k = 1;

    cout << "Введите верхнюю границу для суммы: ";
    cin >> n;

    for (;;) {
        s += k * k;
        k++;

        if (k > n) {
            break;
        }
    }

    cout << "Сумма квадратов чисел от 1 до " << n << ": " << s << endl;

    return 0;
}