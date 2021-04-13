#include <stdio.h>

int main()
{
    int C;
    scanf("%d", &C);

    int count = 0;
    for (int i = 1; i <= 9; ++i)
    {
        for (int j = 1; j <= 9; ++j)
        {
            int number = 10 * i + j;
            if (i > j && number <= C)
            {
                printf("%d\n", number);
                count++;
            }
        }
    }
    printf("%d", count);

    return 0;
}