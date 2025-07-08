#include <stdio.h>

void main(void)

{
    int num1;
    int num2;
    int sum;

    printf("Pleas give me your num1:");
    scanf("%d",&num1);

    printf("Pleas give me your num2:");
    scanf("%d",&num2);

    sum = num1 + num2;
    printf("Sum of %d and %d equal %d",num1,num2,sum);

}
