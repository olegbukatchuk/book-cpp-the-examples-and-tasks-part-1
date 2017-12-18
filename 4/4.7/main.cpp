#include <iostream>
#include <cstdlib>

using namespace std;

void swap(char* a, char* b)
{
    cout << "Вызывается функция swap()" << endl;

    cout << "Первая переменная: " << *a << endl;
    cout << "Вторая переменная: " << *b << endl;

    char t = *b;
    *b = *a;
    *a = t;

    for (int i = 1; i <= 20; i++) {
        cout << "-";
    }

    cout << endl;

    cout << "Первая переменная: " << *a << endl;
    cout << "Вторая переменная: " << *b << endl;

    cout << "Вызывается функция swap() завершено" << endl;
}

int main()
{
    char x = 'A', y = 'B';

    cout << "Первая переменная: " << x << endl;
    cout << "Вторая переменная: " << y << endl;

    swap(&x, &y);

    cout << "Первая переменная: " << x << endl;
    cout << "Вторая переменная: " << y << endl;

    return 0;
}