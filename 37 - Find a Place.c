#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int* array = malloc(sizeof(int) * (N + 1));
    for (int i = 0; i < N; i++)
        scanf("%d", &array[i]);

    int M;
    scanf("%d", &M);

    for (int i = 0; i < N; i++) {
        if (M < array[i])
        {
            for (int j = N; j >= i + 1; j--)
                array[j] = array[j - 1];
            array[i] = M;
            break;
        }
    }

    for (int i = 0; i < N + 1; i++)
        printf("%d ", array[i]);

    free(array);

    return 0;
}