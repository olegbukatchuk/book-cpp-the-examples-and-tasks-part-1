#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    /* Верхняя грвница суммы */
    int n, s = 0;

    /* Ввод значения для верхней границы суммы */
    cout << "Верхняя граница суммы: ";
    cin >> n;

    if (n > 0) {
        while (n) {
            s += n * n;
            n--;
        }
        cout << "Сумма квадратов: " << s << endl;
    }
    else {
        cout << "Указано не корректное значение" << endl;
    }

    return 0;
}