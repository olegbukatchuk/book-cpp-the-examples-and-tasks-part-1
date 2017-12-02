#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    /* 1 миля */
    const double kmInMile = 1.609344;

    /* Расстояние в милях и киллометрах */
    double distMile, distKm;

    /* Запрос на ввод значения в милях */
    cout << "Укажите расстояние в милях: ";

    /* Считывание значения для расстояния в милях */
    cin >> distMile;

    /* Вычисляем расстояние в киллометрах */
    distKm = distMile * kmInMile;

    /* Выводим результат в консоль */
    cout << "Расстояние в киллометрах: " << distKm << endl;
    
    return 0;
}