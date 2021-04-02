#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    int remainder;
    while (1)
    {
        remainder = A % B;

        if (remainder == 0)
            break;

        A = B;
        B = remainder;
    }

    printf("%d", B);

    return  0;
}