#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    SetConsoleOutputCP( 65001 );

    char* str[3] = {{"красный"}, {"желтый"}, {"зелёный"}};

    for (int i = 0; i < 3; i++) {
        cout << str[i] << endl;
    }

    cout << str[0][3] << str[1][1] << str[0][1];
    cout << str[2][5] << str[1][5] << endl;

    return 0;
}