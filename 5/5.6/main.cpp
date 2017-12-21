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
        cout << "Итоговая сумма: " << getMoney() << endl;
    }

    void setAll(string n, double m, double r, int t)
    {
        name = n;
        money = m;
        rate = r;
        time = t;
    }

    MyMoney(string n, double m, double r, int t)
    {
        setAll(n, m, r, t);
    }

    MyMoney()
    {
        setAll("", 0, 0, 0);
    }
};

class BigMoney: public MyMoney {
public:
    int periods;

    double getMoney()
    {
        double s = money;

        for (int k = 1; k <= time * periods; k++) {
            s *= (1 + rate / 100 / periods);
        }

        return s;
    }

    void showAll()
    {
        cout << "Имя: " << name << endl;
        cout << "Вклад: " << money << endl;
        cout << "Ставка (%): " << rate << endl;
        cout << "Период (лет): " << time << endl;
        cout << "Начислений в год: " << periods << endl;
        cout << "Итоговая сумма: " << getMoney() << endl;
    }

    void setAll(string n, double m, double r, int t)
    {
        MyMoney::setAll(n, m, r, t);
        periods = p;
    }

    BigMoney(string n, double m, double r, int t, int p = 1)
    {
        
    }
};