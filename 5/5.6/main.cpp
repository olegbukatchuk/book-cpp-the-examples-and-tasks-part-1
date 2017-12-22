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

        int p;
        periods = p;
    }

    BigMoney(string n, double m, double r, int t, int p = 1): MyMoney(n, m, r, t)
    {
        periods = p;
    }

    BigMoney(): MyMoney()
    {
        periods = 1;
    }
};

int main()
{
    MyMoney objA("Кот Матроскин", 1200, 8, 5);

    BigMoney objB("Дядя Фёдор", 1000, 7, 6, 2);
    BigMoney objC("Пёс Шарик", 1500, 6, 8);
    BigMoney objD;

    objD.setAll("Почтальон Печкин", 800, 10, 3);

    objA.showAll();
    cout << endl;

    objB.showAll();
    cout << endl;

    objC.showAll();
    cout << endl;

    return 0;
}