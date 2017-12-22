#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class MyClass {
public:
    string name;
    int number;

    void show()
    {
        cout << "Поде name: " << name << endl;
        cout << "Поле number: " << number << endl;
    }
};

int main()
{
    MyClass objA, objB;

    MyClass* p;

    p = &objA;

    p->name = "Объект objA";
    p->number = 111;
    p->show();

    p = &objB;

    p->name = "Объект objB";
    p->number = 222;
    p->show();

    cout << "Проверяем объекты\n";

    objA.show();
    objB.show();

    return 0;
}