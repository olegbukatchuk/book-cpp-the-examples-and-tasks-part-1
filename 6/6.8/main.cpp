#include <iostream>
#include <cstdlib>

using namespace std;

class Alpha {
public:
    void show() {
        cout << "Класс Alpha" << endl;
    }

    void showAll() {
        show();
    }
};

class Bravo: public Alpha {
public:
    void show() {
        cout << "Класс Bravo" << endl;
    }
};

int main() {
    Bravo obj;

    obj.show();
    obj.showAll();

    return 0;
}