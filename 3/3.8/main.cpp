#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(2);

    int i, j;

    const int size = 5;

    const int cols[size] = {3, 7, 6, 4, 2};

    int** nums = new int*[size];

    for (i = 0; i < size; i++) {
        nums[i] = new int[cols[i]];
        cout << "| ";

        for (j = 0; j < cols[i]; j++) {
            nums[i][j] = rand() % 10;
            cout << nums[i][j] << " | ";
        }

        cout << endl;
    }

    for (i = 0; i < size; i++) {
        delete [] nums[i];
    }

    delete [] nums;

    return 0;
}