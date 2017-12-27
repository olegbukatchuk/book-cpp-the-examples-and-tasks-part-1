#include <iostream>
#include <cstdlib>
#include <set>

using namespace std;

int main() {
    srand(2);

    int n;
    cout << "Количество разных символов: ";
    cin >> n;

    set <char> symbs;

    char s;

    int counter = 0;

    while (symbs.size() < n) {
        s = 'A' + rand() % (n + 5);
        counter++;

        cout << s << " ";
        symbs.insert(s);
    }

    cout << "\nВсего сгенерировано " << counter << " символов\n";
    cout << "Разние симоволы:\n";

    set<char>::iterator p;
    p = symbs.begin();

    cout << "|";

    while (p != symbs.end()) {
        cout << " " << *p << " |";
        p++;
    }

    cout << endl;

    return 0;
}