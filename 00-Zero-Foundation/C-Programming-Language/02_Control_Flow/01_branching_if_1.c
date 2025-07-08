#include <stdio.h>

void main(void)
{

    char ch, op;
    int n, temp;
    float num1, num2;


    ch = getche();

    if (ch == 'y') // If Statement
        {
        printf("\n\nRight One\n");
        printf("\nMr ZIAD!!!\n");
        }


    // ---------------------------


    printf("\nInter a number: ",n);
    scanf("%d",&n);

    if (n < 10) // If - Else Statement
        {
        printf("\n%d is less than 10\n",n);
        printf("\nSquare = %d\n",n*n);
        }
    else
        {
        printf("\n%d is not less than 10\n",n);
        printf("\nSquare = %d\n",n*n);
        }

    if (n%2 == 0)
        {
        printf("\n%d is EVEN\n",n);
        }
    else
        {
        printf("\n%d is ODD\n",n);
        }


        // ---------------------------


    if (n <= 5)  // Nested If
        {
        if (n%2 == 0)
            printf("\n%d is EVEN\n",n);
        else
            printf("\n%d is ODD\n",n);
        }


        // ---------------------------


        printf("\nPlease type in the temperature: ");
        scanf("%d",&temp);

        if (temp < 30)  // + Nested If
            {
            if (temp > 25)
                printf("\nNice day!\n ");
            }
        else
            printf("\nSure is hot!\n ");


        // ---------------------------


        printf("\nType Number Operator Number: ");
        scanf("%f %c %f",&num1, &op, &num2);

        if (op == '+')   // Else - If Construct
            printf("\nSolution = %f\n", num1 + num2);
        else if (op == '-')
            printf("\nSolution = %f\n", num1 - num2);
        else if (op == '*')
            printf("\nSolution = %f\n", num1 * num2);
        else if (op == '/')
            {if (num2 != 0)
            printf("\nSolution = %f\n", num1 / num2);
            else
            printf("Error : Division by zero");
            }



}
