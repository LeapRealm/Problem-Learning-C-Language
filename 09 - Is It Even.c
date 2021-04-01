#include <stdio.h>

int main()
{
    int A;
    scanf("%d", &A);

    printf("%s", (A % 2 == 0) ? "YES" : "NO");

    return 0;
}