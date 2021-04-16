#include <stdio.h>
#include <stdlib.h>

int Min(const int tmp[], int size);

int main()
{
    int N;
    scanf("%d", &N);

    int* array = malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
        scanf("%d", &array[i]);

    printf("%d", Min(array, N));

    free(array);

    return 0;
}

int Min(const int tmp[], int size)
{
    int min = tmp[0];
    for (int i = 1; i < size; i++)
    {
        if (tmp[i] < min)
            min = tmp[i];
    }

    return min;
}