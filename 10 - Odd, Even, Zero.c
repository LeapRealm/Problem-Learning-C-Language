#include <stdio.h>

int main()
{
    int A;
    scanf("%d", &A);

    if (A == 0)
        printf("zero");
    else if (A % 2 == 0)
        printf("even");
    else
        printf("odd");

    return 0;
}