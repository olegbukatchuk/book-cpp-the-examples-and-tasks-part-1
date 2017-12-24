#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

template <class T> class MyClass {
private:
    T value;

    MyClass(T v) {
        value = v;
    }

    void show() {
        cout << "Значение поля: " << value << endl;
    }
};

template <> class MyClass<string> {
private:
    char value[100];

public:
    MyClass(char* str) {
        int k;

        value[0] = '|';

        for (k = 0; str[k]; k++) {
            value[2 * k + 1] = str[k];
            value[2 * k + 2] = '|';
        }

        value[2 * k + 1] = '\0';
    }

    void show() {
        cout << value << endl;
    }
};

int main() {
    MyClass <int> objA(100);
    MyClass <char> objB('A');
    MyClass <char*> objC("текст");
    MyClass <string> objD("текст");

    objA.show();
    objB.show();
    objC.show();
    objD.show();

    return 0;
}