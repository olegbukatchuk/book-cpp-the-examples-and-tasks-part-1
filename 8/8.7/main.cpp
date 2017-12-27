#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {
    srand(2);

    int n;
    cout << "Количество символов: ";
    cin >> n;

    vector <char> symbs(n, 'A');

    vector <char>::iterator p;
    cout << "|";

    for (p = symbs.begin(); p != symbs.end(); p++) {
        *p += rand() % (n + 5);

        cout << " " << *p << " |";
    }
    cout << endl;

    return 0;
}