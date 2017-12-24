#include <iostream>
#include <cstdlib>

using namespace std;

template <class X> class BaseClass {
private:
    X value;

public:
    BaseClass(X val) {
        set(val);
    }

    void set(X val) {
        value = val;
    }

    X get() {
        return value;
    }
};

class Alpha: public BaseClass <int> {
public:
    Alpha(): BaseClass <int> (0) {}
};

class Bravo: public BaseClass <char> {
public:
    Bravo(char s): BaseClass <char> (s) {}
};

o