#include <iostream>
#include <cstdlib>

using namespace std;

/* Результат функции, динамический массив с числами Фибоначчи */
int* fibs(int n)
{
    int* nums = new int[n];

    for (int i = 0; i < n; i++) {
        if (i == 0 || i == 1) {
            nums[i] = 1;
        } else {
            nums[i] = nums[i - 1] + nums[i - 2];
        }
    }

    return nums;
}

/* Результат функции, динамический массив со случайными числами */
int* myrand(int m)
{
    int* nums = new int[m];

    for (int i = 0; i < m; i++) {
        nums[i] = rand() % 10;
    }

    return nums;
}

int main()
{
    srand(2);

    int n = 10, m = 15, i;

    int* f;
    f = fibs(n);

    for (i = 0; i < n; i++) {
        cout << f[i] << " ";
    }

    cout << endl;

    delete [] f;

    f = myrand(m);

    for (i = 0; i < m; i++) {
        cout << f[i] << " ";
    }

    cout << endl;

    delete [] f;


    return 0;
}