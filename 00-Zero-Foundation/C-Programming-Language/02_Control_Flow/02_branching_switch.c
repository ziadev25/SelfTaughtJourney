#include <stdio.h>

void main(void)
{
    float num1, num2;
    int number;
    char op;


    // Switch Statement 1*

    printf ("Type number operate number: ");
    scanf("%f %c %f",&num1, &op, &num2);

    switch (op)
    {

    case '+':
        printf("\n =%f\n", num1 + num2);
        break;
    case '-':
        printf("\n =%f\n", num1 - num2);
        break;
    case '*':
        printf("\n =%f\n", num1 * num2);
        break;
    case '/':
        printf("\n =%f\n", num1 / num2);
        break;
    default:
        printf("\nUnknown operator\n");
    }


    // Switch Statement 2*


    printf ("Please number >=1 and <= 10: ");
    scanf("%d",&number);

    switch (number)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
        printf("\nOdd number\n");
        break;
    case 2:
    case 4:
    case 6:
    case 8:
    case 10:
        printf("\nEven number\n");
        break;
    default:
        printf("\nInvalid Input\n");
    }


}
