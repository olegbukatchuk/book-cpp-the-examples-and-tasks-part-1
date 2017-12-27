#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {
    srand(2);

    int n;
    cout << "Количество символов: ";
    cin >> n;

    vector <char> symbs;
    cout << "|";

    while (symbs.size() < n) {
        symbs.push_back('A' + rand() % (n + 5));

        cout << " " << symbs[symbs.size() - 1] << " |";
    }

    cout << endl;

    return 0;
}