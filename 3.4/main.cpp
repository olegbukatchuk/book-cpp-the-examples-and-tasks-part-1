#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int* size;

    size = new int;

    cout << "Введите размер массива: ";
    cin >> *size;

    char* symbs;

    symbs = new char[*size];

    for (int k = 0; k < *size; k++) {
        symbs[k] = 'a' + k;
        cout << symbs[k] << " ";
    }

    delete [] symbs;

    cout << "\nМассив и переменная удалены\n";

    return 0;
}