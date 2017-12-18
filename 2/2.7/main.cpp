#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num;

    /* Инициализация генератора случайных чисел */
    srand(2);

    for (int k = 1; k <= 10; k++) {
        /* Случайное число от 2 до 8 */
        num = 2 + rand() % 7;

        switch (num) {
            case 3:
            case 6:
                cout << num << ": число делится на три" << endl;
                break;
            case 2:
            case 4:
            case 8:
                cout << num << ": степень двойки" << endl;
            case 5:
                cout << num << ": пятёрка" << endl;
                break;
            case 7:
                cout << num << ": семёрка" << endl;
        }
    }

    return 0;
}