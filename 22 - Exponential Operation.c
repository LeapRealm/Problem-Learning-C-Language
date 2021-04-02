#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    int result = 1;
    for(int i = 0; i < B; i++)
        result *= A;

    printf("%d", result);

    return  0;
}