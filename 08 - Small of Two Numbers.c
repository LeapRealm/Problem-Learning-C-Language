#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    int smallNumber = (A < B) ? A : B;
    printf("%d", smallNumber);

    return 0;
}