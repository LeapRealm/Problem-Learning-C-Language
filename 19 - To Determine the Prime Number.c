#include <stdio.h>
#include <stdbool.h>

int main()
{
    int N;
    bool isPrimeNumber = true;
    scanf("%d", &N);

    for (int i = 2; i < N; i++)
    {
        if (N % i == 0)
            isPrimeNumber = false;
    }

    if (isPrimeNumber)
        printf("YES");
    else
        printf("NO");

    return  0;
}