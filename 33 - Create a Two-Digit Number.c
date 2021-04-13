#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            if (i == j)
                continue;

            printf("%d%d\n", i, j);
        }
    }

    return 0;
}