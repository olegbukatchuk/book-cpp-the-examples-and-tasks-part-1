#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    /* Размер массива */
    const int n = 10;

    /* Инициализация генератора случайных чисел */
    srand(2);

    /* Создание массива */
    int nums[n];

    /* Целочисленные переменные */
    int i, j, k, s;

    cout << "Массив до сортировки:\n| ";

    /* Сортировка массива */
    for (i = 1; i <= n - 1; i++) {
        for (j = 0; j < n-i; j++) {
            /* Обмен значениями */
            if (nums[j] > nums[j + 1]) {
                s = nums[j + 1];
                nums[j + 1] = nums[j];
                nums[j] = s;
            }
        }
    }

    /* Отображение отрисованного массива */
    for (k = 0; k < n; k++) {
        cout << nums[k] << " | ";
    }

    cout << endl;


    return 0;
}