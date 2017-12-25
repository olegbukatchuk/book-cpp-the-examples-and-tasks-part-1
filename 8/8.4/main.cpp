#include <iostream>
#include <cstdlib>
#include <valarray>

using namespace std;

int main() {
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    valarray <int> fibs(n);

    fibs[0] = 1;
    fibs[1] = 1;

    cout << fibs[0] << " " << fibs[1];

    for (int k = 2; k < n; k++) {
        
    }
}