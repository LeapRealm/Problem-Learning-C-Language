#include <stdio.h>

int main()
{
    int studentNumber;
    scanf("%d", &studentNumber);

    int dozenCount = studentNumber / 12;
    if (studentNumber % 12 != 0)
        dozenCount++;

    printf("%d", dozenCount);

    return 0;
}