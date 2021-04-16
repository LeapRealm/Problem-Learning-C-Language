#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n);

int main()
{
    int N;
    scanf("%d", &N);

    int num;
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &num);

        if (isPrime(num))
            printf("%d ", num);
    }

    return 0;
}

bool isPrime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}