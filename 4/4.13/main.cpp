#include <iostream>
#include <cstdlib>

using namespace std;

int &getMax(int* nums, int n)
{
    int i = 0, k;

    for (k = 0; k < n; k++) {
        if (nums[k] > nums[i]) {
            i = k;
        }
    }

    return nums[i];
}

void show(int* nums, int n)
{
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;
}

