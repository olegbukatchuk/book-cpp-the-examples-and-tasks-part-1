#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num, k;

    for (k = 1; k <= 5; k++) {
        cout << "Укажите число от 1 до 3: ";
        cin >> num;

        if (num == 1) {
            cout << "Это единица" << endl;
        } else {
            if (num == 2) {
                cout << "Это двойка" << endl;
            } else {
                if (num == 3) {
                    cout << "Это тройка" << endl;
                } else {
                    cout << "Я не знаю такого числа" << endl;
                }
            }
        }
    }

    return 0;
}