#include <iostream>
#include <cstdlib>

using namespace std;

int* getMax(int* nums, int n)
{
    int i = 0, k;

    for (k = 0; k < n; k++) {
        if (nums[k] > nums[i]) {
            i = k;
        }
    }

    return nums + i;
}

void show(int* nums, int n)
{
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;
}

int main()
{
    const int size = 10;

    int numbers[size] = {1, 5, 8, 2, 4, 9, 11, 9, 12, 3};

    show(numbers, size);

    int* maxPnt = getMax(numbers, size);

    cout << "Максимальное значение: " << *maxPnt << endl;

    *maxPnt = -100;

    show(numbers, size);

    int maxNum = *getMax(numbers, size);

    cout << "Максимальное значение: " << maxNum << endl;

    maxNum = -200;

    show(numbers, size);

    cout << "Максимальное значение: ";

    cout << *getMax(numbers, size) << endl;

    cout << "Индекс элемента: ";

    cout << getMax(numbers, size) - numbers << endl;

    return 0;
}