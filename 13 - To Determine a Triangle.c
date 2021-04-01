#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int longestEdge, edge1, edge2;
    if (A > B)
    {
        if (A > C)
        {
            longestEdge = A;
            edge1 = B;
            edge2 = C;
        }
        else
        {
            edge1 = A;
            edge2 = B;
            longestEdge = C;
        }
    }
    else
    {
        if (B > C)
        {
            edge1 = A;
            longestEdge = B;
            edge2 = C;
        }
        else
        {
            edge1 = A;
            edge2 = B;
            longestEdge = C;
        }
    }

    printf("%s", (longestEdge < edge1 + edge2) ? "YES" : "NO");

    return 0;
}