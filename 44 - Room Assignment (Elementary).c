#include <stdio.h>

int main()
{
    int room[6][2] = { 0 };
    int totalRoomCount = 0;

    int studentCount, maxStudentNumberOfRoom;
    scanf("%d %d", &studentCount, &maxStudentNumberOfRoom);

    for (int i = 1; i <= studentCount; i++)
    {
        int gender, grade;
        scanf("%d %d", &gender, &grade);

        room[grade - 1][gender]++;
    }

    for (int i = 0; i < sizeof(room) / sizeof(room[0]); i++)
    {
        for (int j = 0; j < sizeof(room[0]) / sizeof(int); j++)
        {
            totalRoomCount += room[i][j] / maxStudentNumberOfRoom;
            if (room[i][j] % maxStudentNumberOfRoom != 0)
                totalRoomCount++;
        }
    }

    printf("%d", totalRoomCount);

    return 0;
}