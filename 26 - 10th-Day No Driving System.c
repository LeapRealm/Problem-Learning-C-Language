#include <stdio.h>

int main()
{
    int dayUnits;
    scanf("%d", &dayUnits);

    int carNumber[7];
    for (int i = 0; i < 7; i++)
        scanf("%d", &carNumber[i]);

    int count = 0;
    int carNumberUnits[7];
    for (int i = 0; i < 7; i++)
    {
        if (carNumber[i] % 10 == dayUnits)
            count++;
    }

    printf("%d", count);

    return 0;
}