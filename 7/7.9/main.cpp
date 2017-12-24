#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

template <class A> class Alpha {
public:
    A alpha;

    Alpha(A a) {
        alpha = a;
    }

    void show() {
        cout << "Поле alpha: " << alpha << endl;
    }
};

template <class B> class Bravo {
public:
    B bravo;

    Bravo(B b) {
        bravo = b;
    }

    void show() {
        cout << "Поле bravo: " << bravo << endl;
    }
};

template <class A, class B, class C> class Charlie: public Alpha <A>, public Bravo <B> {
public:
    C charlie;

    Charlie(A a, B b, C c): Alpha <A> (a), Bravo <B> (b) {
        charlie = c;
    }

    void show() {
        Alpha <A>::show();
        Bravo <B>::show();

        cout << "Поле charlie: " << charlie << endl;
    }
};

int main() {
    Charlie <string, char, int> objA("текст", 'A', 100);
    Charlie <int, double, char> objB(200, 5.5, 'B');

    objA.show();
    objB.show();

    return 0;
}