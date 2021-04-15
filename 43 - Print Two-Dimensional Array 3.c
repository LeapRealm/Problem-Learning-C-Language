#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int** array = malloc(sizeof(int*) * N);
    for (int i = 0; i < N; i++)
        array[i] = malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            array[i][j] = 0;

    int k = 1;
    int m = 0, n = N - 1, delta = 1;
    for (int i = 0; i < N; i++)
    {
        if (m == n)
        {
            array[i][m] = k++;
            delta *= -1;
            m += delta;
            n -= delta;
            continue;
        }

        array[i][m] = k++;
        m += delta;

        array[i][n] = k++;
        n -= delta;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%3d", array[i][j]);

        printf("\n");
    }

    for (int i = 0; i < N; i++)
        free(array[i]);
    free(array);

    return 0;
}