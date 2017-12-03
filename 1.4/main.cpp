#include <iostream>
#include <cstdlib>

using namespace std;

/* Функция для расчёта расстояния в милях */
double getDistMile()
{
    /* Переменная для записи результата функции */
    double dist;

    /* Запрос на ввод расстояния в милях */
    cout << "Укажите расстояние в милях: ";

    /* Считываем значение для расстояния милях */
    cin >> dist;

    return dist;
}

/* Функция для перевода милей в киллометры */
double getDistKm(double dist)
{
    /* В 1 миле киллометров */
    double kmInMile = 1.609344;

    return dist * kmInMile;
}

int main()
{
    /* Переменная для записи расстояния в милях */
    double distMile = getDistMile();

    cout << "Расстояние в киллометрах: " << getDistKm(distMile) << endl;

    return 0;
}