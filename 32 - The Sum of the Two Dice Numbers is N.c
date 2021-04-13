#include <stdio.h>

int main()
{
    int sumNumber;
    scanf("%d", &sumNumber);

    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (i + j == sumNumber)
                printf("%d %d\n", i, j);
        }
    }

    return 0;
}