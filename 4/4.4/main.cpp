#include <iostream>
#include <cstdlib>

using namespace std;

double getMoney(double m, double r, int y)
{
    if (y == 0) {
        return m;
    } else {
        return (1 + r / 100) * getMoney(m, r, y - 1);
    }
}

int main()
{
    double money = 1000;
    double rate = 5;

    cout << "Начальная сумма: " << money << endl;
    cout << "Годовая ставка: " << rate << "%\n";

    cout << "Вклад на 1 год: " << getMoney(money, rate, 1) << endl;
    cout << "Вклад на 7 лет: " << getMoney(money, rate, 7) << endl;
    cout << "Вклад на 10 лет: " << getMoney(money, rate, 10) << endl;

    return 0;
}