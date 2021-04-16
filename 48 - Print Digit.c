#include <stdio.h>
#include <string.h>

int digit(int n);
int digit_String(int n);

int main()
{
    int N;
    scanf("%d", &N);

    printf("%d\n", digit(N));
    printf("%d\n", digit_String(N));

    return 0;
}

int digit(int n)
{
    int k = 4;
    for (int i = 1000; i >= 1; i /= 10)
    {
        if (n / i != 0)
            return k;
        else
            k--;
    }

    return k;
}

int digit_String(int n)
{
    char num[10];
    sprintf(num, "%d", n);

    return (int)strlen(num);
}