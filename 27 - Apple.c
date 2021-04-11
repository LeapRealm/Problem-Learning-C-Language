#include <stdio.h>
#include <stdlib.h>

typedef struct SchoolInfo
{
    int studentNumber;
    int appleNumber;
} SchoolInfo;

int main()
{
    int schoolNumber;
    scanf("%d", &schoolNumber);

    SchoolInfo* schoolInfos = malloc(sizeof(SchoolInfo) * schoolNumber);
    for (int i = 0; i < schoolNumber; ++i)
        scanf("%d %d", &schoolInfos[i].studentNumber, &schoolInfos[i].appleNumber);

    int leftAppleCount = 0;
    for (int i = 0; i < schoolNumber; ++i)
        leftAppleCount += schoolInfos[i].appleNumber % schoolInfos[i].studentNumber;

    printf("%d", leftAppleCount);

    return 0;
}