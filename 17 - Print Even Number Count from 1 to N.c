#include <stdio.h>

int main()
{
    int N, count = 0;
    scanf("%d", &N);

    for (int i = 1; i <= N; ++i)
    {
        if (i % 2 == 0)
            count++;
    }

    printf("%d", count);

    return  0;
}