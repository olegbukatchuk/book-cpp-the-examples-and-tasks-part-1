#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "Решение уравнения Ax = B\n";

    double A, B;

    cout << "A = ";
    cin >> A;

    cout << "B = ";
    cin >> B;

    try {
        if (A != 0) {
            throw A;
        }

        if (B != 0) {
            throw "Решений нет";
        }
    } catch (double e) {
        cout << "Решение уравнения: " << B / e << endl;
    } catch (char* e) {
        cout << e << endl;
    }

    return 0;
}