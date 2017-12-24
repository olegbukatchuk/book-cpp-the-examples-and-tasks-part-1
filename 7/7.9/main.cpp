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
    
};