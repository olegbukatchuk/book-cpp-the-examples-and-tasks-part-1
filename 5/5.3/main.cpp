#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class MyMoney {
private:
    string name;
    double money;
    double rate;
    int time;


    double getMoney()
    {
        for (int k = 1; k <= time; k++) {
            s += (1 + rate / 100);
        }

        return s;
    }

public:
    void showAll()
    {
        cout << "Имя: " << name << endl;
        cout << "Вклад: " << money << endl;
        cout << "Ставка (%): " << rate << endl;
        cout << "Период (лет): " << time << endl;
        cout << "Итоговая сумма: " << getMoney() << endl;
    }

    void setAll(string n, double m, double r, int n)
    {
        name = n;
        money = m;
        rate = r;
        time = t;
    }

    void setAll(double m, double r, int n)
    {
        money = m;
        rate = r;
        time = t;
    }

    void setAll(string n)
    {
        name = n;
    }

    void setAll(int t)
    {
        time = t;
    }

    void setAll(double m, double r)
    {
        money = m;
        rate = r;
    }

    void setAll(double r, bool s = true)
    {
        if (s) {
            money = x;
        } else {
            rate = x;
        }
    }
};

int main()
{
    MyMoney obj;

    /* Присваивание значения полям */
    obj.setAll("Иванов Иван Иванович", 1000, 8, 5);
    obj.showAll();

    cout << endl;

    /* Изменение имени */
    obj.setAll("Петров Пётр Петрович");
    obj.showAll();

    cout << endl;

    /* Изменение времени вклада */
    obj.setAll(10);
    obj.showAll();

    cout << endl;

     /* Изменение процентной ставки */
    obj.setAll(1200.0);
    obj.showAll();

    cout << endl;



    return 0;
}
