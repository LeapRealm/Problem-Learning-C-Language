#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int** array = malloc(sizeof(int*) * N);
    for (int i = 0; i < N; i++)
        array[i] = malloc(sizeof(int) * N);

    int k = 1;
    for (int j = 0; j < N; j++)
        for (int i = N - 1; i >= 0; i--)
            array[i][j] = k++;

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