#include <stdio.h>

int main()
{
    int array[9];
    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
        scanf("%d", &array[i]);

    int K;
    scanf("%d", &K);

    for (int i = 1; i <= K; i++)
    {
        int temp = array[0];
        for (int j = 0; j < sizeof(array) / sizeof(int) - 1; j++)
            array[j] = array[j + 1];
        array[sizeof(array) / sizeof(int) - 1] = temp;
    }

    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
        printf("%d ", array[i]);

    return 0;
}