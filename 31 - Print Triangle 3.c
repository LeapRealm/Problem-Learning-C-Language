#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    for (int i = 1; i <= number / 2 + 1; ++i)
    {
        for (int j = 1; j <= (number / 2 + 1) - i; ++j)
            printf(" ");

        for (int j = 1; j <= i; ++j)
            printf("@");

        printf("\n");
    }

    for (int i = 1; i <= number - (number / 2 + 1); ++i)
    {
        for (int j = 1; j <= i; ++j)
            printf(" ");

        for (int j = 1; j <= (number / 2 + 1) - i; ++j)
            printf("@");

        printf("\n");
    }

    return 0;
}