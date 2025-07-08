#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(void)
{
    int n, n1, max, number, max1, counter = 0;
    char ch, ch1;



    // integer numbers & max number (Way 1):
    printf("\n Value of A: ");
    scanf("%d", &n);
    max = n;

    for (ch='B'; ch<='D'; ch++)
    {
        printf("\n Value of %c: ", ch);
        scanf(" %d", &n);
        if (n>max){
            max = n;
        }
    }

     printf("\n Max number is: %d\n", max);


    // integer numbers & max number (Way 2):
    printf("\n ---------------------------- \n");
    printf("\n Please number terminated by end: ");
    if (scanf("%d", &number) == 0) exit(0);
    max1 = number;

    do{
        printf("\n Please number terminated by end: ");
        if (scanf("%d", &number) == 0) break;
        if (number > max1){
            max1 = number;
        }
    } while (1);

    printf("\n Max1 number is: %d\n", max1);


    // Restrict use input only numbers with max 5 digits:
    printf("\n ---------------------------- \n");
    printf("\n Enter only numbers with max five digits: ");
    while ((ch1 = getch()) != '\r')
    {
        switch (ch1)
        {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            if ( counter < 5){
                putch(ch1);
                n1 = n1 * 10 + ch1 - '0';
                counter++;
            }
            break;
        case 8:
            if ( counter > 0){
                putch('\b');
                putch(' ');
                putch('\b');
                n1 = n1 / 10;  // Remove last digit
                counter--;
            }
            break;
        }
    }
    printf("\n\n You get integer value: %d\n", n1);
}
