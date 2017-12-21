#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

/* Описание класса */
class MyMoney {
public:
    string name;
    double money;
    double rate;
    int time;

    double getMoney()
    {
        double s = money;
        for (int k = 0; k <= time; k++) {
            s *= (1 + rate / 100);
        }

        return s;
    }

    void showAll()
    {
        cout << "Имя: " << name << endl;
        
    }
};

int main()
{


    return 0;
}