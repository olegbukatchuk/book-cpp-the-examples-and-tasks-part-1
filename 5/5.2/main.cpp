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
        double s = money;

        for (int k = 1; k <= time; k++) {
            s *= (1 + rate / 100);
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

    void setAll(string n, double m, double m, double r, int t)
    {
        name = n;
        money = m;
        rate = r;
        time = t;
    }
};

int main()
{
    /* Создание объектов */
    MyMoney objA, objB;

    /* Присваивание значений полям */
    objA.setAll("Иванов Иван Иванович", 1000, 8, 5);
    objB.setAll("Петров Пётр Петрович", 1200, 7, 4);

    

    return 0;
}