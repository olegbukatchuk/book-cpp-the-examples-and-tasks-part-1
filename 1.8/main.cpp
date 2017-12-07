#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    /* Константа для определения размера массива */
    const int n = 10;

    /* Создание целочисленного массива */
    int bnm[n + 1];

    /* Индексная переменная */
    int k = 0;

    /* Первый элемент массива */
    bnm[0] = 1;

    cout << bnm[0];

    /* Заполняем массив */
    while (k < n) {
        /* Значение элемента массива */
        bnm[k + 1] = bnm[k] * (n - k) / (k + 1);

        cout << " " << bnm[k + 1];

        k++;
    }

    cout << endl;


    return 0;
}