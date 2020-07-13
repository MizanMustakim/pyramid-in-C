#include <stdio.h>
int main()
{
    int iteration, leftSide, rightSide, space, number = 12;

    printf("input the number of level %d\n", number);

    for (iteration = 1; iteration <= number; iteration++)
    {
        for (space = 1; space <= number - iteration; space++)
        {
            printf("   "); /*Here is three spaces*/
        }
        for (leftSide = 1; leftSide <= iteration; leftSide++)
        {
            printf(" %d ", leftSide);
        }
        for (rightSide = iteration - 1; rightSide > 0; rightSide--)
        {
            printf(" %d ", rightSide);
        }
        printf("\n");
    }
    return 0;
}
