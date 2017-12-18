#include <cstdlib>
#include <cstdio>

using namespace std;

/* Глобальная константа */
const int n = 3;

/* Функция для отображения элементов двумерного массива */
void show(int M[n][n])
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", M[i][j]);
        }
    }

    printf("\n");
}

int main()
{
    int A[n][n] = {{2, 1, -1}, {2, 0, -1}, {2, 3, -1}};
    printf("Матрица A:\n");
    show(A);

    int B[n][n] = {{2, 1, -1}, {1, 3, 1}, {-2, 1, 4}};
    printf("Матрица B:\n");
    show(B);

    int C[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Матрица C = A * B:\n");
    show(C);

    return 0;
}