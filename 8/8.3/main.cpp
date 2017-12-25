#include <iostream>
#include <cstdlib>
#include <complex>

using namespace std;

int main() {
    double x = 2, y = 3;

    complex <double> A(3, 4), B(2, -1);

    cout << "Сумма: ";
    cout << A << " + " << B << " = " << A + B << endl;
    cout << "Разность: ";
    cout << A << " - " << B << " = " << A - B << endl;
    cout << "Произведение: ";
    cout << A << " * " << B << " = " << A * B << endl;
    cout << "Частное: ";
    cout << A << " / " << B << " = " << A / B << endl;

    cout << "Сумма: ";
    cout << A << " + " << x << " = " << A + x << endl;
    cout << "Разность: ";
    cout << A << " - " << x << " = " << A - x << endl;
    cout << "Произведение: ";
    cout << A << " * " << x << " = " << A * x << endl;
    cout << "Частное: ";
    cout << A << " / " << x << " = " << A / x << endl;

    cout << "Сумма: ";
    cout << y << " + " << B << " = " << y + B << endl;
    cout << "Разность: ";
    cout << y << " - " << B << " = " << y - B << endl;
    cout << "Произведение: ";
    cout << y << " * " << B << " = " << y * B << endl;
    cout << "Частное: ";
    cout << y << " / " << B << " = " << y / B << endl;

    cout << "Действительная часть: ";
    cout << "Re" << A << " = " << A.real() << endl;
    cout << "Мнимая часть: ";
    cout << "Im" << A << " = " << A.imag() << endl;
    cout << "Модуль: ";
    cout << "abs" << A << " = " << abs(A) << endl;
    cout << "Аргумент: ";
    cout << "arg" << A << " = " << arg(A) << endl;

    cout << "Комплекно-сопряженное число:";

}