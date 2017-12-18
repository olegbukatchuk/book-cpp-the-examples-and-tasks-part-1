#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(2);

    const int width = 9;
    const int height = 5;

    char Lts[height][width];

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            Lts[i][j] = 'A' + rand() % 25;
            cout << Lts[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}