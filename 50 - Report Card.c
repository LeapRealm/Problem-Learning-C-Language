#include <stdio.h>
#include <stdlib.h>

typedef struct StudentInfo {
    int studentId;
    int mathScore;
    int englishScore;
    int cLanguageScore;
} StudentInfo;

int main()
{
    int studentCount;
    scanf("%d", &studentCount);

    StudentInfo* students = malloc(sizeof(StudentInfo) * studentCount);
    for (int i = 0; i < studentCount; i++)
        scanf("%d %d %d %d", &students[i].studentId, &students[i].mathScore, &students[i].englishScore, &students[i].cLanguageScore);

    StudentInfo firstClassMathScoreStudent = students[0];
    for (int i = 1; i < studentCount; i++)
    {
        if (firstClassMathScoreStudent.mathScore < students[i].mathScore)
            firstClassMathScoreStudent = students[i];
    }

    printf("%d", firstClassMathScoreStudent.cLanguageScore);

    free(students);

    return 0;
}