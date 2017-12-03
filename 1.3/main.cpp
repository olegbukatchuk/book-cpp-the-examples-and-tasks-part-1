#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    /* Количество футов в миле */
    const int ftInMile = 5280;

    /* Количество киллометров в миле */
    const double kmInMile = 1.609344;

    /*
     * Целочисленные переменные для записи значений
     * миль, футов, киллометров и метров
     */
    int dMile, dFt, dKm, dM;

    cout << "Расстояние в милях и футах" << endl;

    cout << "Мили: ";
    cin >> dMile;

    cout << "Футы: ";
    cin >> dFt;

    /* Считаем расстояние в милях */
    double distMile = dMile + (double) dFt / ftInMile;

    /* Считаем расстояние в милях */
    double distKm = distMile * kmInMile;

    /* Киллометры */
    dKm = (int) distKm;

    /* Метры */
    dM = (int) ((distKm - dKm) * 1000);

    /* Выводим результаты вычислений в консоль */
    cout << "Расстояние в киллометрах и метрах." << endl;
    cout << "Киллометры: " << dKm << endl;
    cout << "Метры: " << dM << endl;
    

    return 0;
}