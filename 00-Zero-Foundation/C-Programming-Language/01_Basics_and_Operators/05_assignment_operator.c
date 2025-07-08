#include <stdio.h>

void main(void)
{

    int number;
    int salary;

    number=333;
    salary=9000;

    salary=salary+number;
    salary+=number; //other way and good one to add number to salary...

    printf("final salary is %d",salary);
}
