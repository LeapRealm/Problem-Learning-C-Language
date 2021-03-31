#include <stdio.h>

int main()
{
    double num;
    scanf("%lf", &num);

    int integerNumber = (int)num;
    int firstDecimalNumber = (int)(num * 10) % 10;
    int secondDecimalNumber = (int)(num * 100) % 10;

    double result;
    if (secondDecimalNumber >= 5)
        result = integerNumber + (firstDecimalNumber * 0.1 + 0.1);
    else
        result = integerNumber + (firstDecimalNumber * 0.1);

    printf("%lf", result);

    return 0;
}