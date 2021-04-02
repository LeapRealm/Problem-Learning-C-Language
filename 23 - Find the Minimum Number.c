#include <stdio.h>

int main()
{
    int num[7];
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
        scanf("%d", &num[i]);

    int minNumber = num[0];
    for(int i = 1; i < sizeof(num) / sizeof(int); i++)
    {
        if (minNumber > num[i])
            minNumber = num[i];
    }

    printf("%d", minNumber);

    return 0;
}