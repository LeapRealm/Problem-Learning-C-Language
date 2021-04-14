#include <stdio.h>

int main()
{
    int array[9];
    int arraySize = sizeof(array) / sizeof(int);
    for (int i = 0; i < arraySize; i++)
        scanf("%d", &array[i]);

    int sum = 0;
    for (int i = 0; i < arraySize - 1; i++)
    {
        for (int j = i + 1; j < arraySize; j++)
        {
            sum = 0;

            for (int k = 0; k < arraySize; k++)
            {
                if (k == i || k == j)
                    continue;

                sum += array[k];
            }

            if (sum == 100)
            {
                for (int k = 0; k < arraySize; k++)
                {
                    if (k == i || k == j)
                        continue;

                    printf("%d ", array[k]);
                }
                break;
            }
        }

        if (sum == 100)
            break;
    }

    return 0;
}