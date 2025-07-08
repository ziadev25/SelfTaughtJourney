#include <stdio.h>

void main(void)
{
    int count, value, value1, value2, total=0, sum=0, sum1=0;
    int i, j, z, y;




    // For Statement

    for (count=1; count<=5; count++)
    {
        printf("\n Please Value [%d]: ", count);
        scanf("%d", &value);
        total = total + value;
    }

    printf("\n Sum of numbers is: %d\n\n", total);

    printf("\n\n");



    // Multiple Statements

    for (i=1; i<=10; i++)
    {
        for (j=1; j<=10; j++)
        printf("%4d", j*i);
        printf("\n\n");
    }




    // The Break Statement

    for (z=1; z<=5; z++)
    {
        printf("\n Please value to stop enter zero [%d]: ", z);
        scanf("%d", &value1);
        if (value1 == 0) break;
        sum = sum + value1;
    }
    printf("\n Sum of numbers is: %d\n\n", sum);




        // The continue Statement

    for (y=1; y<=5; y++)
    {
        printf("\n Please value to stop enter zero [%d]: ", y);
        scanf("%d", &value2);
        if (value2 < 0) continue;
        sum1 = sum + value2;
    }
    printf("\n Sum of numbers is: %d\n\n", sum1);




}
