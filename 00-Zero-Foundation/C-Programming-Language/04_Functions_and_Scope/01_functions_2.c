#include <stdio.h>

int increment(int a);
void drawRrect(int length, int width);
void main(void)
{
    int number = 5;

    printf("Living room:\n ");
    drawRrect(35, 12);
    printf("Closet:\n ");
    drawRrect(4, 4);
    printf("Kitchen:\n ");
    drawRrect(16, 16);
    printf("Bathroom:\n ");
    drawRrect(6, 8);
    printf("Bedroom:\n ");
    drawRrect(12, 12);

    printf("\n\nBefore Increment number = %d", number);
    increment(number);
    printf("\nAfter Increment number = %d\n\n", number);
}

void drawRrect(int length, int width)
{
    int j, k;

    length /= 2;
    width  /= 4;

    for (j=1; j<=width; j++)
    {
        printf("\t\t");

        for (k=1; k<=length; k++)
            printf("\xDB");

        printf("\n");
    }
}

int increment(int a) //call by value
{
    a++;
}
