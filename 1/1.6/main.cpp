#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    /* Верхняя граница суммы и значение суммы */
    int n, s = 0;

    /* Ввод значения для верхней границы ряда */
    cout << "Верхняя граница суммы: ";
    cin >> n;

    /* Вычисляем сумму */
    while (n) {
        /* Добавление нового слагаемого к сумме */
        s += n * n;
        n--;
    }

    cout << "Сумма квадратов:" << s << endl;

    return 0;
}