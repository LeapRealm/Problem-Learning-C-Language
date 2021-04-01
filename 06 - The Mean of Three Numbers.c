#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    double average = (A+B+C) / 3.0;

    int integerNumber = (int)average;
    int firstDecimalNumber = (int)(average * 10) % 10;
    int secondDecimalNumber = (int)(average * 100) % 10;
    int thirdDecimalNumber = (int)(average * 1000) % 10;

    double result;
    if (thirdDecimalNumber >= 5)
        result = integerNumber + (firstDecimalNumber * 0.1) + (secondDecimalNumber * 0.01 + 0.01);
    else
        result = integerNumber + (firstDecimalNumber * 0.1) + (secondDecimalNumber * 0.01);

    printf("%lf", result);

    return 0;
}