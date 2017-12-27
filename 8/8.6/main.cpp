#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {
    srand(2);

    int n;

    cout << "Количество символов: ";
    cin >> n;

    vector <char> symbs(n);
    cout << "|";

    for (int k = 0; k < symbs.size(); k++) {
        symbs[k] = 'A' + rand() % (n + 5);

        cout << " " << symbs[k] << " |";
    }

    cout << endl;

    return 0;
}