#include <stdio.h>

int main()
{
    int totalAnimalCount, totalAnimalLegCount;
    scanf("%d %d", &totalAnimalCount, &totalAnimalLegCount);

    int rabbitCount, chickenCount;
    rabbitCount = (totalAnimalLegCount / 2) - totalAnimalCount;
    chickenCount = (2 * totalAnimalCount) - (totalAnimalLegCount / 2);
    printf("%d %d", rabbitCount, chickenCount);

    return 0;
}