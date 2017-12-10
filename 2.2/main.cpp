#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n, s, k;

    cout << "Введите верхнюю границу для суммы: ";
    cin >> n;

    for (k = 1, s = 0; k <= n; s += k * k, k++)

    cout << "Сумма квадратов чисел от 1 до " << n << ": " << s << endl;

    return 0;
}