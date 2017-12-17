#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char str[100] = "Программируем на C++";

    cout << str << endl;

    for (int k = 0; str[k]; k++) {
        cout << str[k] << "_";
    }

    cout << endl;

    for (char* p = str; *p; p++) {
        cout << p << endl;
    }

    str[13] = '\0';

    cout << str << endl;

    cout << str + 14 << endl;

    cout << "Раз Два Три" + 4 << endl;

    const char* q = "Раз Два Три" + 8;

    cout << q[0] << endl;

    cout << q << endl;

    return 0;
}