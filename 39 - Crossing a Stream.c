#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int* array = malloc(sizeof(int) * N);
    array[0] = 2;
    array[1] = 3;

    for (int i = 2; i < N; i++)
        array[i] = array[i - 2] + array[i - 1];

    printf("%d", array[N - 1]);

    free(array);

    return 0;
}