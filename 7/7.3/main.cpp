#include <iostream>
#include <cstdlib>

using namespace std;

template <class X, class R> R apply(R (*fun) (X), X arg) {
    return fun(arg);
};