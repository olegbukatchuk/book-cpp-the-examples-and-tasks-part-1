#include <iostream>
#include <cstdlib>

using namespace std;

double getMoney(double m, double r)
{
    return m * (1 + r / 100);
}

double getMoney(double m, double r, int y)
{
    double s = m;

    for (int k = 1; k <= y; k++){
        s *= (1 + r / 100);
    }

    return s;
}

double getMoney(double m, double r, int y, int n)
{
    return getMoney(m, r / n, y * n);
}

int main()
{
    double money = 1000;

    double rate = 5;

    cout << "Начальная сумма: " << money << endl;
    cout << "Годовая ставка: " << rate << "%\n";

    cout << "Вклад на один год: " << getMoney(money, rate) << endl;
    cout << "Вклад на 7 лет: " << getMoney(money, rate, 7) << endl;
    cout << "Вклад на 7 лет (начисления 3 раза в год): ";
    cout << getMoney(money, rate, 7, 3) << endl;

    return 0;
}