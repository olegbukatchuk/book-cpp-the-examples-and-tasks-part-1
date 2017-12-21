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

    MyMoney()
    {
        name = "";
        money = 0;
        rate = 0;
        time = 0;
    }

    MyMoney(string n, double m, double r, int t)
    {
        setAll(n, m, r, t);
    }

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
        cout << "Итоговая сумма: " << getMoney() << endl;

        for (int k = 1; k <= 35; k++) {
            cout << "-";
        }

        cout << endl;
    }

    void setAll(string n, double m, double r, int t)
    {
        name = n;
        money = m;
        rate = r,
        time = t;
    }

    MyMoney operator++()
    {
        money = money + 1000;

        return *this;
    }

    MyMoney operator+(MyMoney obj)
    {
        MyMoney tmp;

        tmp.name = "Почтальон Печкин";
        tmp.money = money + obj.money;
        tmp.rate = (rate > obj.rate) ? rate : obj.rate;
        tmp.time = (time + obj.time) / 2;

        return tmp;
    }
};