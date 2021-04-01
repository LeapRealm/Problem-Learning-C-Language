#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int minNumber;

    if (A < B)
    {
        if (A < C)
            minNumber = A;
        else
            minNumber = C;
    }
    else
    {
        if (C < B)
            minNumber = C;
        else
            minNumber = B;
    }

    printf("%d", minNumber);

    return 0;
}