#include <iostream>
#include <cstdlib>

using namespace std;

void fibs(int* nums, int n)
{
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == 1) {
            nums[i] = 1;
        } else {
            nums[i] = nums[i - 1] + nums[i - 2];
        }
    }
}

void myrand(int* nums, int m)
{
    for (int i = 0; i < m; i++) {
        nums[i] = rand() % 10;
    }
}

int main()
{
    srand(2);

    const int n = 15;
    int f[n];

    fibs(f, n);

    for (int i = 0; i < n; i++) {
        cout << f[i] << " ";
    }

    cout << endl;

    return 0;
}