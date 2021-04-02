#include <stdio.h>
#include <limits.h>

int main()
{
    int num[7];
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
        scanf("%d", &num[i]);

    int minNumber = INT_MAX;
    int sum = 0;
    for(int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        if (num[i] % 2 == 1)
        {
            sum += num[i];

            if (num[i] < minNumber)
                minNumber = num[i];
        }
    }

    printf("%d\n", sum);
    printf("%d\n", minNumber);

    return 0;
}