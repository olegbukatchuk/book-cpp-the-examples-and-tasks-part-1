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

    
};