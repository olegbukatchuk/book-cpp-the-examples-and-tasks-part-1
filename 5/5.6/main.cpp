#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class MyMoney {
public:
    string name;
    double money;
    double rate;
    int time;

    double getMoney()
    {
        double s = money;

        for (int k = 1; k <= time; k++) {
            s *= (1 + rate / 100);
        }

        return s;
    }

    void showAll()
    {
        cout << "Имя: " << name << endl;
        cout << "Вклад: " << money << endl;
        cout << "Ставка (%): " << rate << endl;
        cout << "Период (лет): " << time << endl;
    }
};