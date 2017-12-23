#include <iostream>
#include <cstdlib>

using namespace std;

class Alpha {
public:
    char codeA;

    Alpha(char a) {
        codeA = a;
    }

    virtual void show() {
        cout << "Метод из класса Alpha: " << codeA << endl;
    }
};

class Bravo {
public:
    char codeB;

    Bravo(char b) {
        codeB = b;
    }

    virtual void show() {
        cout << "Метод из класса Bravo: " << codeB << endl;
    }
};

class Charlie: public Alpha, public Bravo {
public:
    Charlie(char a, char b): Alpha(a), Bravo(b) {}

    void show() {
        cout << "Метод из класса Charlie: ";
        cout << codeA << codeB << endl;
    }
};

int main() {
    cout << "Используем переменные\n";

    Alpha objA('A');
    objA.show();

    Bravo objB('B');
    objB.show();

    Charlie objC('C', 'D');
    objC.show();

    objA = objC;
    objB = objC;
    objA.show();
    objB.show();

    Alpha* pntA = &objC;
    Bravo* pntB = &objC;
    Charlie* pntC = &objC;

    pntA->show();
    pntB->show();
    pntC->show();

    return 0;
}