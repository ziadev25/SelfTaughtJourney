#include <stdio.h>

void main(void)
{

    int count=1, i=1;
    char ch;
    float num, sum=0;



    // While Statement 1

    printf(" \n\n ");

    while (count <= 4)
    {
        printf("%2d", count);
        count++;
    }



    // While Statement 2

    printf(" \n\n ");

    while ((ch = getch()) != 27)
    {
        printf("\nYou press %c Ascii code %d character\n", ch, ch);
    }



    // While Statement 3

    printf("\nPlease enter value terminated by 0 to stop \n");

    printf("\nvalue number [%d]: ", i);
    scanf("%f", &num);

    while (num!=0)
    {
        sum += num;
        i++;
        printf("\nvalue number [%d]: ", i);
        scanf("%f", &num);
    }
    printf("\n Sum of %d previous numbers = %.2f\n", --i, sum);


}
