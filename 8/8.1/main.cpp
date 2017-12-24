#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct MyMoney {
    string name;
    double money;
    double rate;
    int time;
};

double getMoney(MyMoney str) {
    double s = str.money;

    for (int k = 1; k <= str.time; k++) {
        s *= (1 + str.rate / 100);
    }

    return s;
}

void show(MyMoney str) {
    cout << "Имя вкладчика: " << str.name << endl;
    cout << "Начальная сумма: " << str.money << endl;
    cout << "Процентная ставка: " << str.rate << endl;
    cout << "Время (лет): " << str.time << endl;
    cout << "Итоговая сумма: " << getMoney(str) << endl;
}

