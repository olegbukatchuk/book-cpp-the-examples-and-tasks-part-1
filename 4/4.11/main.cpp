#include <iostream>
#include <cstdlib>

using namespace std;

int getLength(char* str)
{
    int s = 0;

    for (int i = 0; str[i]; i++) {
        s++;
    }

    return s;
}

int getSpace(char* str) {
    int s = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ') {
            s++;
        }
    }

    return s;
}

void show(char* str)
{
    cout << "Фраза: " << str << endl;
    cout << "Символом: " << getLength(str) << endl;
    cout << "Пробелов: " << getSpace(str) << endl;

    for (int k = 1; k <= 35; k++) {
        cout << "-";
    }

    cout << endl;
}

int main()
{
    char txt[100] = "Изучаем язык программирования C++";

    show(txt);

    show("В C++ есть классы и объекты");

    return 0;
}