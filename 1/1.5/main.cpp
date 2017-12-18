#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    /* Верхняя граница суммы, значение суммы и индексная переменная */
    int n = 10, s = 0, k = 1;

    while (k <= n) {
        /* Добавление нового слагаемого к сумме */
        s = s + k * k;
        k++;
    }

    cout << "Сумма квадратов от 1 до " << n << ": " << s << endl;

    return 0;
}