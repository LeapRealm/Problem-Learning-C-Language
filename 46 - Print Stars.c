#include <stdio.h>

void printStar(int n);

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        printStar(i);
        printf("\n");
    }

    return 0;
}

void printStar(int n)
{
    for (int i = 1; i <= n; i++)
        printf("*");
}